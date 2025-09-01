#include <stdio.h>
#include <math.h>

int main() {
    double n, a, r, f, fprime, error, epsilon;
    int i, N;
    printf("Enter the number to find cube root: ");
    scanf("%lf", &n);

    printf("Enter initial guess: ");
    scanf("%lf", &a);

    printf("Enter tolerance (e.g. 0.0001): ");
    scanf("%lf", &epsilon);

    printf("Enter maximum iterations: ");
    scanf("%d", &N);

    i = 0;
    error = 100000; 

    while (error >= epsilon && i <= N) {
        f = a * a * a - n;      
        fprime = 3 * a * a;    

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
        printf("Approximate cube root of %.4f = %.4f\n", n, r);
        printf("Iterations: %d\n", i);
    }

    return 0;
}

