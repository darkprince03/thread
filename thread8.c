#include<stdio.h>
#include<pthread.h>
#include<errno.h>
#include<unistd.h>
void *f1(void *);
void *f2(void *);
int main()
{
	pthread_t tid1,tid2;
	pthread_create(&tid1,NULL,f1,NULL);
	pthread_create(&tid2,NULL,f2,NULL);
	pthread_join(tid1,NULL);
	pthread_join(tid2,NULL);
	printf("\nBye Bye from main thread\n");
	return 0;
}

void *f1(void *arg)
{
	for(int i=0;i<1000;i++)
	{	
		fprintf(stderr,"%c ",'X');
	}
	pthread_exit(NULL);
}
void *f2(void *arg)
{
	for(int i=0;i<1000;i++)
	{	
		fprintf(stderr,"%c ",'O');
	}
	pthread_exit(NULL);
}
	
