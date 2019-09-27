#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int g=0;
void *myThreadFun(void *vargp)
{
	int *myid=(int *)vargp;
	int s=0;
	++s;++g;
	sleep(30);
	printf("Thread ID: %d , Static: %d, GLobal: %d\n",*myid,++s,++g);
	return NULL;
}

int main()
{
	pthread_t thread1_id;
	printf("Before Thread\n");
	int i;
	for(i=0;i<10;i++)
		pthread_create(&thread1_id,NULL,myThreadFun,(void *)&thread1_id);
	pthread_exit(NULL);
	printf("After Thread\n");
	return 0;
}

