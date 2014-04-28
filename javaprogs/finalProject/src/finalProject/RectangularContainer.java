package finalProject;

public class RectangularContainer extends Container {

	private double width;
	private double lenght;

	public RectangularContainer(double height, double width, double len) {
		super(height);
      this.width = width; this.lenght = len;
	}

	@Override
	public double getTopArea() {
		return (width * lenght);
	}

	@Override
	public double getTopPerimeter() {
		return (2.0 * (lenght + width));
	}

}
