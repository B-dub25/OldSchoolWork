package labAnimalArray;

public class Cow extends Animal {

	private int numberOfSpots;

	public Cow() {
		numberOfSpots = 0;
	}

	public Cow(String name, double pounds, int old, int howMany) {
		super(name, pounds, old);
		this.numberOfSpots = howMany;
	}
   
	public String makeNoise() {
		return ("Moooo");
	}
	@Override
	public String toString() {
		return(super.toString() + "\nNumber of Spots: "+ numberOfSpots);
	}
}
