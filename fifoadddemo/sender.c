//sender
#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd;
	int x[2]={1,2};
	fd=open("add",O_WRONLY);
	write(fd,x,sizeof(x));
	close(fd);
	return 0;
}


