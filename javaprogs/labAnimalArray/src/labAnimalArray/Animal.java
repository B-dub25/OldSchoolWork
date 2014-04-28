package labAnimalArray;

public abstract class Animal {

	private String animalName;
	private double animalWeight;
	private int animalAge;

	public Animal() {
		this.animalName = "Unknown";
		this.animalWeight = 0.0;
		this.animalAge = 0;
	}

	public Animal(String name, double pounds, int old) {
		this.animalName = name;
		this.animalWeight = pounds;
		this.animalAge = old;
	}

	public abstract String makeNoise();

	public String toString() {
		return ( "Name: "+ animalName + "\nWeight: " + animalWeight
				+ "\nAge: " + animalAge);
	}
	public double getWeight() {
		return (animalWeight);
	}
}
