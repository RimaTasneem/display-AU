#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define size 100
int main()
{ 
int arr[size];
int i;
float sum=0.0;
float mean,variance=0.0,stddev;
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
variance /= size;
printf("\n\nvariance of numbers = %.2f\n",variance);
stddev = sqrt(variance);
printf("\n\n Standard Deviation of numbers = %.2f\n",stddev);
return 0;
}
