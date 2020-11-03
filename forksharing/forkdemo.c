
#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	int count=0;
	pid_t id;
	id=fork();
	if (0==id)
	{
		sleep(1);
		printf("count in child %d\n",count);
	}
	else
	{
		count++;
		printf("count in parent %d\n",count);
	}
	return 0;
}

