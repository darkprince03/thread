#include "functions.h"
int factorial(int n)
{
	int i,t=1;
	for(i=1;i<=n;i++)
	{
		t=t*i;
	}
	return t;
}
