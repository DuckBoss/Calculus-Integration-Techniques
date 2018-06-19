public class SimpsonsRule {
	
	public static double M_PI = 3.14159265358979323846;
	
	public static void main(String[] args) {
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
         System.out.println(String.format("Simpson's Rule: %.5f", finalArea));

	}
	
	private static double function(double x)
    {
        return x * x;
    }

}
