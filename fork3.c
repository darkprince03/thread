#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int i,cpid;
	static int ctr;
	cpid=fork();
	if(cpid==0)
	{
		for(i=0;i<3;i++)
			printf("Child Counter is: %d\n",ctr++);
	}
	else
	{
		for(i=0;i<3;i++)
			printf("Parent Counter is: %d\n",ctr++);
	}
	return 0;
}
	
