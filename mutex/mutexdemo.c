#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *incthread(void *arg);
void *decthread(void *arg);
pthread_mutex_t count_mutex;
int count=0;
int main(){
	pthread_t tid1,tid2;
	pthread_mutex_init(&count_mutex,NULL);
	pthread_create(&tid1,NULL,incthread,NULL);
	pthread_create(&tid2,NULL,decthread,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	pthread_mutex_destroy(&count_mutex);
	return 0;
	}
void *incthread(void *arg)
{
	while(1){
		//lock
		pthread_mutex_lock(&count_mutex);
		//lock
		//pthread_mutex_lock(&count_mutex);
	count++;
	printf("inc thread : %d\n",count);
		//unlock
		pthread_mutex_unlock(&count_mutex);
	}
	return 0;
}
void *decthread(void *arg)
{
	while(1)
	{
		//lock
		pthread_mutex_lock(&count_mutex);
	count--;
	printf("dec thread : %d\n",count);
		//unlock
		pthread_mutex_unlock(&count_mutex);
	}
	return 0;
}
