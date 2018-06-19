#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define M_PI 3.14159265358979323846
double f(double x);

int main()
{
    double a = 0.1;
    double b = M_PI;
    double aOld = 0;
    double aNew = 0;
    int n = 1000;
    double dx = (b-a)/n;

    // 2nd derivative of f((b-a)/n)
    double ddf = 2.0;

    double hM = 0;
    double xM = 0;

    int i;
    for (i = 1; i < n; i++)
    {
        xM = a + (i-1) * dx + (dx/2);
        hM += xM;
    }
    aNew = (hM * dx + ((b-a) * (dx*dx) / 24)) * (ddf);

    while(abs(aOld - aNew) > 0.00001)
    {
        aOld = aNew;
        n = n + 2;
        dx = (b-a)/n;
        hM = 0;
        int i;
        for (i = 1; i < n; i++)
        {
            xM = a + (i-1) * dx + (dx/2);
            hM += xM;
        }
        aNew = (hM * dx + ((b-a) * (dx*dx)) / 24) * (ddf);
    }

    double finalArea = aNew;
    printf("Composite Mid Point: %.5f", finalArea);

}

double f(double x)
{
    return x * x;
}

