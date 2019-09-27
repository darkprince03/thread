#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void *myThreadFun(void *vargp)
{
	sleep(100);
	printf("Printing GeeksQuiz from Thread1\n");
	return NULL;
}
void *myThreadFun1(void *vargp)
{
	sleep(100);
	printf("Printing GeeksQuiz from Thread2\n");
	return NULL;
}
int main()
{
	pthread_t thread1_id,thread2_id;
	printf("Before Thread\n");
	pthread_create(&thread1_id,NULL,myThreadFun,NULL);
	pthread_create(&thread2_id,NULL,myThreadFun1,NULL);
	pthread_join(thread1_id,NULL);
	pthread_join(thread2_id,NULL);
	printf("After Thread\n");
	exit(0);
}

