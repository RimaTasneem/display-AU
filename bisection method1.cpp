#include<stdio.h>
#include<math.h>
double f(double x){
	return x*x*x - 4*x - 9;
}
int main()
{
	double a , b , r ,app_root , error , epsilon ;
	int N , i = 0;
	cout << "Enter the interval [a,b]: ";
	cin >> a >> b;
	if(f(a)*f(b) >=0){
		cout << "invalid interval f(a) and f(b) must have opposite signs." << endl;
		return 1;
	}
	cout << "enter tolerance (epsilon):";
	cin >> epsilon;
	cout << "enter maximum number of iteration (N):";
	cin >> N;
	double app_root = b;
	r = a+b/2;
	error = fabs( app_rooot - r)/fabs(r);
	while(error > epsilon && i < N){
		double fr= f(r);
		if (f(a) * f(r) < 0){
			b = r;
		}
		else{
			a = r;
		}
		app_root = r;
		i++;
		r = a+b/2;
		error = fabs(app_root - r)/fabs(r);
	}
	if(i >= N){
		cout << "method  did not coverge within "<< N <<"interation."<< endl;
	}
	else{
		cout << " approximate root = " << r << endl;
		cout << " function value at root f(r) = "<< f(r) << endl;
		cout << "iteration used = " << i<< endl;
	}
	return 0;
}


