package myzoo;

public class Horse extends Animals {

	private double topSpeed;
	
	public Horse() {
		topSpeed = 0.0;
	}
	
	public Horse(String anName, double lbs, int old, double speed) {
		super(anName, lbs, old); topSpeed = speed;
	}
	
	@Override
	public String makeNoise() {
		return (" Whinnnny ");
	}
	
	@Override
	public String toString() {
		return (super.toString() + " Top Speed: " + topSpeed);
	}

}
