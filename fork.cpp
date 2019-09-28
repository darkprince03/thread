#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int cpid=fork();
	if(cpid==0)
		printf("Hello I am child\n");
	else 
		printf("Hello I am Parent\n");
	return 0;
}
