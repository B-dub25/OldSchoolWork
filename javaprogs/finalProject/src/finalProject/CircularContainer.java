package finalProject;

public class CircularContainer extends Container {

	private double radius;
	
	public CircularContainer(double height, double raduis){
		super(height);
		this.radius = raduis;
	}
	@Override
	public double getTopArea() {
		return (Math.PI * radius * radius);
	}

	@Override
	public double getTopPerimeter() {
		return (2.0*Math.PI * radius);
	}

}
