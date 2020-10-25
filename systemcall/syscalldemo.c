#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>

int main()
{
int fd;
fd=open("desd.txt",O_WRONLY | O_CREAT);
if(-1==fd){
	perror("error in open:\n");
	return -1;
}

write(fd,"nijin",5);
close(fd);
return 0;
}
