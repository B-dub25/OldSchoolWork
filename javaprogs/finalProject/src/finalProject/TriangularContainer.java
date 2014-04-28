package finalProject;

public class TriangularContainer extends Container {
	private double side_a; 
	private double side_b; 
	private double side_c;
	
	public TriangularContainer(double height, double a, double b , double c) {
	   super(height);
	   side_a = a; side_b = b; side_c = c;
	}
	@Override
	public double getTopArea() {
		 double s = (side_a + side_b + side_c)/2.0;
		return Math.sqrt(s*(s-side_a)*(s-side_b)*(s-side_c)); 
	}

	@Override
	public double getTopPerimeter() {
		return (side_a+side_b+side_c);
	}

}
