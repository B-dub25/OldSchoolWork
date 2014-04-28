package hangman;

import java.util.Scanner;

public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		 // TODO Auto-generated method stub
        String ansString = "y";
        Scanner cinScanner = new Scanner(System.in);
        while (ansString.equals("y")){
        Hangman.playGame();
        System.out.println("Congratulations: you guessed the word!!");     
        System.out.println("Do you want to play again? " );
        ansString = cinScanner.next();
        }
        cinScanner.close();
    }

	
}
