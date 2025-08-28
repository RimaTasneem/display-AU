#include<stdio.h>
#include<math.h>
double f(double x) {
	return 4*x*x*x-6*x*x+7*x-2.3;
}
int main()
{
	int i=1;
	float a,b,fa,fb,r,fr,eps;
	printf("enter initial value of a and b :");
	scanf("%f%f",&a,&b);
	do
	{
		fa=f(a);
		fb=f(b);
		r=b-fb*(a-b)/(fa-fb);
		printf("\n i=%d a=%f b=%f r=%f f(r)=%f",i,a,b,r,f(r));
		if(fabs(r-b)<eps){
			printf("Approximate root=%f\n",r);
			return 0;
		}
		else
		{
			a=b;
			fa=fb;
			b=r;
			fb=f(r);
			i++;
		}
	}
	while(fabs(fb)>0.001);
	printf("in the required calculation %f\n",r);	
	
return 0;
}
 
