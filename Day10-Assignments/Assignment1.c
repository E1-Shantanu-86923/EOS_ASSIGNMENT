#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int main() 
{
	int pid,sig;
	printf("Enter process id : \n");
	scanf("%d",&pid);
	printf("Enter signal : \n");
	scanf("%d",&sig);
        int ret=kill(pid,sig);
	if(ret<0)
	{
		printf("Kill() failed\n");
		_exit(0);
	}
	else
         printf("Process killed success!\n");

         
	printf("%d signal sent to %d\n",sig,pid);
}
