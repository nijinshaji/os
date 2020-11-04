//reciever
#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main()
{
	int fd;
	int x[2];
	fd=open("add",O_RDONLY);
	read(fd,x,sizeof(x));
	for(int i=0;i<2;i++)
		printf("%d\n",x[i]);
	printf("sum is %d",(x[0]+x[1]));
	close(fd);
	return 0;
	}

