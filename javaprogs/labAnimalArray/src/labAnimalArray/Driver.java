package labAnimalArray;

public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Zoo z = new Zoo();
		Snake sly = new Snake("Sly", 5.0, 2, 2);
		Snake sly2 = new Snake("Slyme", 10.0, 1, 2);
		Cow blossy = new Cow("Blossy", 900., 5, 10);
		Horse prince = new Horse("Prince", 1000., 5, 23.2);

		// Following not allowed because Animal is abstract
		// Animal spot = new Animal("Spot", 10., 4);
		
		z.add(sly);
		z.add(sly2);
		z.add(blossy);
		z.add(prince);

		z.makeAllNoises();
		System.out.println("Total weight =" + z.totalWeight());
		System.out.println("**************************");
		System.out.println("Animal Printout:");
		z.printAllAnimals();
		

	}

}
