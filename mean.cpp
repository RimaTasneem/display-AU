#include<stdio.h>
#include<stdlib.h>
#define size 100
int main()
{ 
int arr[size];
int i;
int sum=0;
float mean;
printf("Generate number:\n");
for(i=0;i<size;i++){
	arr[i]=rand() % 50 + 1;
	printf("%d",arr[i]);
	sum += arr[i];
}
mean = sum/size;
printf("\n\nMean of numbers = %.2f\n",mean);
return 0;
}
