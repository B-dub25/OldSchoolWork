package myzoo;

public abstract class Animals {
	
	private	String name;
	private int age;
	private double weight;
	
	public Animals() {
		name = ""; age = 0; weight = 0.0;
	}
	public Animals(String anName, double lbs, int old) {
		name = anName; weight = lbs ;age = old; 
	}
	
	public abstract String makeNoise();
	
	public double getWeight() {
		return weight;
	}
	@Override
	public String toString() {
		return ("Name : " + name + " Age: " + age + " Weight: " + weight);
	}
}
