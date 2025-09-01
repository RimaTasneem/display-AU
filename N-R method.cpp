#include <stdio.h>
#include <math.h>

int main() {
    double  a, r, f, fprime, error, epsilon;
    int i, N;

    printf("Enter initial guess: ");
    scanf("%lf", &a);

    printf("Enter tolerance (e.g. 0.0001): ");
    scanf("%lf", &epsilon);

    printf("Enter maximum iterations: ");
    scanf("%d", &N);

    i = 0;
    error = 100000; 

    while (error >= epsilon && i <= N) {
        f = pow(a, 1/3);
        fprime = pow(a, (-(2/3)));    

        if (fprime == 0) {
            printf("Error: derivative is zero.\n");
            return 1;
        }

        r = a - f / fprime;     
        error = fabs((a - r) / r); 

        a = r;  
        i++;
    }

    if (i > N) {
        printf("Error: Method did not converge in %d iterations.\n", N);
    } else {
        printf("Approximate root is = %.4f\n", r);
        printf("Iterations: %d\n", i);
    }

    return 0;
}

