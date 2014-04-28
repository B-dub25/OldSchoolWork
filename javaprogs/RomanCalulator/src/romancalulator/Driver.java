package romancalulator;

public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
        Romancalulator rc = new Romancalulator();
        while (rc.doCalculation())
        {
            System.out.println("Good Job");
        }
        System.out.println("Finished Roman Computations");
    }

}
