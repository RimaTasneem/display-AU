#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int scan(int x[],int n)
	int M=0;
	for(int i=1;i<=n-1;i++)
	{
		if(x[i]>x[i+1])
		{
			int temp=x[i];
			x[i]=x[i+1];
			x[i+1]=temp;
			M=i;
		}
	}
	return M;
}


