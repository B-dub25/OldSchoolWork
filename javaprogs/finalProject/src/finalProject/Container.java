package finalProject;

public abstract class Container {
	private double height;

	public Container(double height) {
		this.height = height;
	}

	public abstract double getTopArea();

	public abstract double getTopPerimeter();

	public double getVolume() {
		return height * getTopArea();
	}

	public double getSurfaceArea() {
		return ((2.0 * getTopArea()) + (height * getTopPerimeter()));
	}

}
