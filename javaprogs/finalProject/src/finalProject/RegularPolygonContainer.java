package finalProject;

public class RegularPolygonContainer extends Container {

	private double numSides;
	private double side;
	
	public RegularPolygonContainer(double height , double side, double num) {
		super(height); this.side = side; numSides = num;
	}
	@Override
	public double getTopArea() {	
		return ((numSides * side * side) / ( 4*Math.tan(Math.PI/numSides)));
	}

	@Override
	public double getTopPerimeter() {
		return (numSides * side);
	}

}
