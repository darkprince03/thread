#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int main()
{
	while(1)
	{
		fork();
	}
	exit(0);
}

