package myzoo;

public class Cow extends Animals {

	private int spots;
	public Cow() {
		spots = 0;
	}
	public Cow(String anName, double lbs, int old, int numOfSpots) {
		super(anName, lbs, old);
		spots = numOfSpots;
	}
	
	@Override
	public String makeNoise() {
		return (" Mooooo ");
	}
	
	@Override
	public String toString() {
		
		return (super.toString() + " Number of Spots: " + spots);
	}

}
