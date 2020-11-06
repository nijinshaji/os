#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *thread(void *arg);
int main(){
	pthread_t tid;
	pthread_create(&tid,NULL,thread,NULL);
	sleep(2);
	return 0;
	}
void *thread(void *arg)
{
	printf("thread\n");
}
