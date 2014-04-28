package labAnimalArray;

public class Horse extends Animal {

	public double topSpeed;

	public Horse() {

		topSpeed = 0.0;
	}

	public Horse(String name, double pounds, int old, double speed) {
		super(name, pounds, old);
		topSpeed = speed;
	}
	
	public String makeNoise() {
		return("Whinny");
	}
	
	public String toString() {
		return(super.toString() +"\nTop speed: " + topSpeed);
	}
}
