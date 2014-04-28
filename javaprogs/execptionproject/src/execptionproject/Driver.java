package execptionproject;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Driver {

	public static Scanner cin = new Scanner(System.in);

	public static void main(String[] args) {

		Divide();
		try {
			mytry();
		} catch (DivitionByZero e) {
	      System.out.println(e.getMessage());	     
		}
	}

	public static void Divide() {
		int numerator = 0, denominator = 0;
		do {
			try {

				System.out.println("Enter numerator ");
				numerator = cin.nextInt();
				System.out.println("Enter denominator ");
				denominator = cin.nextInt();
				if (numerator < 0)
					throw new NegativeNumber();
				else if (denominator == 0)
					throw new DivitionByZero();
				System.out.println("The answer is " + numerator / denominator);
				break;
			} catch (InputMismatchException e) {
				System.out.println("Invalid input try again ");
				cin.nextLine();
			} catch (DivitionByZero e) {
				System.out.println(e.getMessage());
			} catch (NegativeNumber e) {
				System.out.println(e.getMessage());
			}
		} while (true);
	}
	public static void mytry() throws DivitionByZero {
		
		int x = cin.nextInt();
		if (x <= 0) {
			throw new DivitionByZero();
		}
	}

}
