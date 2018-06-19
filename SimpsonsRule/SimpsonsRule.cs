using System;

namespace CalculusIntegrationTechniques
{
    class SimpsonsRule
    {
        public const double M_PI = 3.14159265358979323846;

        static void Main(string[] args)
        {
            double a = 0.1;
            double b = M_PI;
            double aNew = 0;
            double iterations = 1000;
     
            double dx = (b - a) / (iterations);
            double hS = 0;
            double xS = 0;

            for (int i = 1; i < iterations; i += 2)
            {
                xS = a + (i - 1) * dx;
                hS += function(xS) + 4 * function(xS + dx) + function(xS + 2 * dx);
            }
            aNew = hS * dx / 3;

            double finalArea = aNew;
            Console.WriteLine($"Simpson's Rule: {finalArea}");
        }

        private static double function(double x)
        {
            return x * x;
        }
    }
}
