#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int i,pidA,sA,pidB,sB,pidC,sC;
    pidA=fork();
    if(pidA == 0){
        pidB=fork();
        if(pidB==0)
        {
            pidC=fork();
            if(pidC==0)
            {
                //printf("Process C pid : %d ",getpid());
                for(i=0;i<=5;i++){
                    printf("Process D : pid:%d count:%d \n",getpid(),i);
                   
                    sleep(1);
                }
                
                _exit(0);
            }else
            {//printf("Process B : pid:%d count:%d \n",getpid(),i);
                                    

                for(i=0;i<=5;i++){
                    printf("Process C : pid:%d count:%d \n",getpid(),i);
		    if(i==5)
		    {
			    waitpid(pidC,&sC,0);
			    printf("child exit status: %d\n", WEXITSTATUS(sC));
		    }
                    sleep(1);
            }
            	
            }
        }else
        {
                               // printf("Child1 pid : %d\n",getpid());

            for(i=0;i<=5;i++){
                    printf("Process B : pid:%d count:%d \n",getpid(),i);
		    if(i==5)
                    {
                            waitpid(pidB,&sB,0);
                            printf("child exit status: %d\n", WEXITSTATUS(sB));
                    }

                    sleep(1);
        }
       
        }
    }
    else
    {
                            //printf("parent : %d\n",getpid());

        for(i=0;i<=5;i++){
                    printf("Process A : pid:%d count:%d \n",getpid(),i);
		    if(i==5)
                    {
                            waitpid(pidA,&sA,0);
                            printf("child exit status: %d\n", WEXITSTATUS(sA));
                    }

                    sleep(1);
    }
  
    }
}
