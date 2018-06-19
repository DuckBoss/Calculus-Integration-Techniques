#include <stdlib.h>
#include <stdio.h>
#include <math.h>


#define M_PI 3.14159265358979323846
double f(double x);

int main()
{
    double a = 0.1;
    double b = M_PI;
    double aOld = 0;
    double aNew = 0;
    double iterations = 1000;
    double dx = (b-a)/iterations;

    double hS = 0;
    double xS = 0;

    int i;
    for (i = 1; i < iterations; i+=2)
    {
        xS = a + (i-1) * dx;
        hS += f(xS) + 4 * f(xS + dx) + f(xS + 2 * dx);
    }
    aNew = hS * dx/3;

    double finalArea = aNew;
    printf("Simpson's Rule: %.5f", finalArea);

    return 0;
}

double f(double x)
{
    return x*x;
}
