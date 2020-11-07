#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
void *incthread(void *arg);
void *decthread(void *arg);
sem_t count_sem;
int count=0;
int main(){
	pthread_t tid1,tid2;
	sem_init(&count_sem,0,1);
	pthread_create(&tid1,NULL,incthread,NULL);
	pthread_create(&tid2,NULL,decthread,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	sem_destroy(&count_sem);
	return 0;
	}
void *incthread(void *arg)
{
	while(1){
		sem_wait(&count_sem);
	count++;
	printf("inc thread : %d\n",count);
		sem_post(&count_sem);
	}
	return 0;
}
void *decthread(void *arg)
{
	while(1)
	{
		sem_wait(&count_sem);
	count--;
	printf("dec thread : %d\n",count);
		sem_post(&count_sem);
	}
	return 0;
}
