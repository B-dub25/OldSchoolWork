package labAnimalArray;

public class Zoo {
    
	private Animal[] animals;
	private int actualNumAnimals;
	private int numCages;

	public Zoo() {
		numCages = 20;
		animals = new Animal[numCages];
	}

	public Zoo(int numberOfCages) {
		numCages = numberOfCages;
		animals = new Animal[numCages];
	}

	public void makeAllNoises() {
		for (int i = 0; i < actualNumAnimals; ++i)
			System.out.println(animals[i].makeNoise());
	}

	public void add(Animal animalToAdd) {
		animals[actualNumAnimals] = animalToAdd;
		++actualNumAnimals;
	}

	public double totalWeight() {
		double sum = 0;
		for (int i = 0; i < actualNumAnimals; i++) {
			sum += animals[i].getWeight();
		}
		return sum;
	}

	public void printAllAnimals() {
		for (int i = 0; i < actualNumAnimals; ++i)
			System.out.println(animals[i]);
	}
}
