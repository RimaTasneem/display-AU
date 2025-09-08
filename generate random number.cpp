#include<stdio.h>
#include<stdlib.h>
int  main()
{
	int i,t;
	for(i=1;i<=100;i++)
	{
		t=rand();
		t=t%50+1;
		printf("%d\n",t);
	}
}
