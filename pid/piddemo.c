#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t id;
	pid_t parent_id;
	id=getpid();
	parent_id=getppid();
	printf("id %d\n",id);
	printf("\nparent id  %d\n ",parent_id);
}

