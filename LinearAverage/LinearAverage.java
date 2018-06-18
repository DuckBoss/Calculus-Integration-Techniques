public class LinearAverage {
	public static double M_PI = 3.14159265358979323846;
	public static void main(String[] args) {
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
			hL += (function(xL) * ((b - dx) - (a + dx)));
		}
            
		double linearAverage = hL / iterations;
		System.out.println(String.format("Linear Average: %.5f", linearAverage));
	}
	private static double function (double x)
    {
        return x * x;
    }
}
