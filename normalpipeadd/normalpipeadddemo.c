#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t id;
	int pfd[2];
	pipe(pfd);
	id=fork();
	if(0==id){
		int x[2];
		close(pfd[1]);
		read(pfd[0],x, sizeof(x));
		for(int i=0;i<2;i++)
        	printf("Child(%d) received value: %d\n", getpid(),x[i]);
		printf("child : the sum is %d\n",(x[0]+x[1]));
		close(pfd[0]);

	}
	else{
		close(pfd[0]);
		int x[2]={1,2};
        	write(pfd[1], x, sizeof(x));
		for(int i=0;i<2;i++)
		{
        	printf("Parent(%d) send value: %d\n", getpid(),x[i]);
		}
		close(pfd[1]);

	}
	return 0;
	}
