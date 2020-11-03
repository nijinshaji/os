#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
	//reciever
unsigned char buff[64];
int fd;
fd=open("desd",O_RDONLY);
read(fd,buff,64);
printf("recieved from sender: %s\n",buff);
close(fd);
return 0;
}
