#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define M_PI 3.14159265358979323846
double f(double x);

int main()
{
    double a = 0;
    double b = M_PI;
    int iterations = 1000;

    double dx = (b-a)/iterations;

    double hL = 0;
    double hR = 0;
    double hM = 0;
    double hT = 0;

    double xL = 0;
    double xR = 0;
    double xT = 0;
    double xM = 0;

    int i = 0;
    for (i = 1; i < iterations; i++)
    {
        // Left Rectangular Rule
        xL = a + (i-1) * dx;
        hL = hL + f(xL);

        // Right Rectangular Rule
        xR = a + (i) * dx;
        hR = hR + f(xR);

        // Midpoint Rule
        xM = a + (xL + xR)/2;
        hM = hM + f(xM);

        // Trapezoidal Rule
        xT = (f(xL) + f(xR))/2;
        hT = hT + xT;
    }

    double LeftRectangularResult = hL * dx;
    double RightRectangularResult = hR * dx;
    double MidPointResult = hM * dx;
    double TrapezoidalResult = hT * dx;

    printf("Left Rectangular Result: %.5f\n", LeftRectangularResult);
    printf("Right Rectangular Result: %.5f\n", RightRectangularResult);
    printf("MidPoint Result: %.5f\n", MidPointResult);
    printf("Trapezoidal Result: %.5f\n", TrapezoidalResult);
}


double f(double x)
{
    return x*x;
}
