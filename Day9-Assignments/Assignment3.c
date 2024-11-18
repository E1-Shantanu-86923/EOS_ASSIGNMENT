/* Find max number of child processes that can be created on Linux using C program? Hint: use fork() in inﬁnite loop (wisely). */


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main() 
{
    int pid,s;
    int count = 0;

	while (1)
	{
    	pid = fork();

		if (pid < 0)

		{
    		printf("fork Failed!\n");

		break;

		}

		else if (pid == 0)
		{
    			sleep(5);
			_exit(0);
		}

		else
		{
    			count++;
			printf("Child count : %d\n",count);
		}

   	}
	while(waitpid(-1,&s,0) > 0){
		count--;
		printf("Child remaining to terminate : %d\n",count);
	}

  return 0;

}
