#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846
double f(double x);

int main()
{
    double a = 0;
    double b = M_PI;
    double iterations = 1000;

    double dx = (b - a) / (iterations + 1);
    double hL = 0;
    double xL = 0;

    double i = 0;
    for (i = a + dx; i < b - dx; i+=dx)
    {
        xL = ((a + dx) + (i - dx));
        hL += (f(xL) * ((b - dx) - (a + dx)));
    }

    double linearAverage = hL/iterations;
    printf("Linear Average: %.5f", linearAverage);

    return 0;
}

double f(double x)
{
    return x*x;
}
