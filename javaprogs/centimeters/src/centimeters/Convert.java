package centimeters;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Convert {
	public static final double CENTIMETERS = 2.54;
	public static Scanner cinScanner = new Scanner(System.in);

	public static void main(String[] args) {
		centimetersToFeet();
		feetAndInchesToCent();
		cinScanner.close();
	}

	public static void feetAndInchesToCent() {
		int cent = 0, feet = 0, inches = 0;
		do {
			try {
				System.out.println("Enter feet");
				feet = cinScanner.nextInt();
				if (feet < 0) {
					throw new NegativeNumber();
				}
				System.out.println("Enter inches");
				inches = cinScanner.nextInt();
				if (inches < 0) {
					throw new NegativeNumber();
				}
				cent = (int) (((feet * 12) + inches) * CENTIMETERS);
				System.out.println("Centimeters =" + cent);
				break;
			} catch (NegativeNumber e) {
				System.out.println(e.getMessage());
				System.out.println("Please try again");
				cinScanner.nextLine();

			} catch (InputMismatchException e) {
				System.out.println("Input miss matched ");
				System.out.println("Please try again");
				cinScanner.nextLine();
			}
		} while (true);
	}
	public static void centimetersToFeet() {
		int cent = 0, feet = 0, inches = 0;

		System.out.println("Enter centimeters please");
		do {
			try {
				cent = cinScanner.nextInt();
				if (cent < 0)
					throw new NegativeNumber();
				cent /= CENTIMETERS;
				feet = cent / 12;
				inches = (int) Math.round(cent % 12 + .5);
				System.out.println("Feet = " + feet + " " + "inches =" + inches);
				break;
			} catch (NegativeNumber e) {
				System.out.println(e.getMessage());
				System.out.println("Please try again");
				cinScanner.nextLine();

			} catch (InputMismatchException e) {
				System.out.println("Input miss matched ");
				System.out.println("Please try again");
				cinScanner.nextLine();
			}
		} while (true);
		
	}

}
