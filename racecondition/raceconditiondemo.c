#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void *incthread(void *arg);
void *decthread(void *arg);
int count=0;
int main(){
	pthread_t tid1,tid2;
	pthread_create(&tid1,NULL,incthread,NULL);
	pthread_create(&tid2,NULL,decthread,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	return 0;
	}
void *incthread(void *arg)
{
	while(1){
	count++;
	printf("inc thread : %d\n",count);}
	return 0;
}
void *decthread(void *arg)
{
	while(1)
	{
	count--;
	printf("dec thread : %d\n",count);}
	return 0;
}
