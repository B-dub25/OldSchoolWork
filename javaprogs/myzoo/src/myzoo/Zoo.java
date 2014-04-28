package myzoo;

public class Zoo {
	
	private int actualNumberOfCages;
	@SuppressWarnings("unused")
	private int numberOfCages;
	private Animals[] animals;
	
	public Zoo() {
		actualNumberOfCages = 0;
		animals = new Animals[numberOfCages = 20];
	}
	
	public Zoo(int cage) {
		actualNumberOfCages = 0;
		animals = new Animals[numberOfCages = cage];		
	}
	
	public void add(Animals a) {
		animals[actualNumberOfCages] = a;
		actualNumberOfCages++;
	}
	
	public double totalWeight() {
		double sum = 0;
		for (int i = 0; i < actualNumberOfCages; i++)
			sum += animals[i].getWeight();
		return sum;
	}
	
	public void display() {
		for (int i = 0; i < actualNumberOfCages; i++)
			System.out.println(animals[i]);
	}
	
	public void makeAllNoises() {
		for (int i = 0; i < actualNumberOfCages; i++)
			System.out.println(animals[i].makeNoise());
	}

}
