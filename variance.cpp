#include<stdio.h>
#include<stdlib.h>
#define size 100
int main()
{ 
int arr[size];
int i;
float sum=0.0;
float mean,variance=0.0;
printf("Generate number:\n");
for(i=0;i<size;i++)
{
	arr[i]=rand() % 50 + 1;
	printf("%d  ",arr[i]);
	sum += arr[i];
}
mean = sum/size;
printf("\n\n Mean of numbers = %.2f\n",mean);
for(i=0;i<size;i++)
{
	variance += (arr[i] - mean)*(arr[i]-mean);
}
printf("\n\nvariance of numbers = %.2f\n",variance);
variance /= size;
printf("\n\nvariance of numbers = %.2f\n",variance);
return 0;
}
