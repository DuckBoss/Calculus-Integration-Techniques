
public class LeftRightTrapMid {
	
	public static double M_PI = 3.14159265358979323846;
	
	public static void main(String[] args) {
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
	    
	    System.out.println(String.format("Left Rectangular Result: %.5f", LeftRectangularResult));
	    System.out.println(String.format("Right Rectangular Result: %.5f", RightRectangularResult));
	    System.out.println(String.format("MidPoint Result: %.5f", MidPointResult));
	    System.out.println(String.format("Trapezoidal Result: %.5f", TrapezoidalResult));
	}
	
	public static double f(double x)
	{
	    return x*x;
	}

}
