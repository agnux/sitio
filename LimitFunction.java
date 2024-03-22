/**
 * Aqui está uma função limite de x se aproximando de 2.
 * @author alexandre256bits  
 */

public class LimitFunction {
	public static void main(String[] args) {
		float a = 0;		
		float b = 3;		
		float dx = (float) Math.pow(10, -3);
		int n = Math.round(  (float) (b - a)/dx ) ;		 		
		float[] x = new float[n+1];
		float[] fx= new float[n+1];
		x[0] = a;
		for (int i=0; i < n; ++i ) {
			try {
				x[i+1] = x[i] + dx;
				fx[i]= x[i] * x[i] - x[i] + 1 ;
			}  catch (ArrayIndexOutOfBoundsException e) {
				System.out.println( e.toString() );
			}
			System.out.printf("%2d - %.4f - %.4f\n", i, x[i], fx[i]);
		}
	}
}
