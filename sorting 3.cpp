#include<stdio.h>
#include<stdlib.h>
//#define size 10
int scan(int x[],int n)
{	int M=0,temp;
	for(int i=1;i<=n-1;i++)
	{
		if(x[i]>x[i+1])
		{
			temp = x[i];
			x[i]=x[i+1];
			x[i+1]= temp;
			M=i;
		}
	}
	return M;
}
int main()
{
	int arr[100];
	int i,n=10,k=10;
	printf("Generated Numbers :\n");
	for(i=1;i<=10;i++)
	{
		arr[i]=rand() % 100+1;
		printf("%d ",arr[i]);
	}
	while(k != 0)
	{	
	    k = scan(arr,k);
	    printf("\n%d\n",k);
	    printf("\n\n Sorted Number:\n");
	    for(i=1;i<=n;i++)
	    {
		    printf("%d ",arr[i]);
	    }
	}
	return 0;
}
