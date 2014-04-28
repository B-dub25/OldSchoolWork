package hangman;

import java.util.Random;
import java.util.Scanner;

public class Hangman {

	static Scanner scan = new Scanner(System.in);
	static Random rand = new Random();

	static boolean isIn(char c, String str) {
		int x = 0;
		while (x < str.length()) {
			if (c == str.charAt(x)) {
				return true;
			}
			x++;
		}
		return false;
	}

	static boolean printCurrentStatus(String strToGuess, String userInputs) {

		char[] temp = new char[strToGuess.length()];

		for (int i = 0; i < temp.length; i++)
			temp[i] = '-';

		for (int i = 0; i < strToGuess.length(); i++) {
			if (isIn(strToGuess.charAt(i), userInputs)) {
				temp[i] = strToGuess.charAt(i);
				System.out.print(temp[i]);
			} else {
				System.out.print('-');
			}

		}
		System.out.print(' ');
		for (int i = 0; i < temp.length; i++) {
			if (temp[i] == '-') {
				return false;
			}
		}
		System.out.println();
		return true;
	}

	static String getNextWordToGues() {
		int x;
		x = rand.nextInt(9);
		switch (x) {
		case 0:
			return "elephant";
		case 1:
			return "monkey";
		case 2:
			return "baboon";
		case 3:
			return "barbeque";
		case 4:
			return "giraffe";
		case 5:
			return "simple";
		case 6:
			return "zebra";
		case 7:
			return "porcupine";
		case 8:
			return "aardvark";
		default:
			return getNextWordToGues();
		}
	}

	static void playGame() {
		System.out.println("Enter a letter ");
		String wordToGuess = getNextWordToGues();
		String userInputs = scan.next();
		while (!printCurrentStatus(wordToGuess, userInputs)) {
			System.out.println("Enter a letter ");
			String tempString = scan.next();
			userInputs += tempString;
			System.out.println();
			System.out.println("Current user inputs = " + userInputs);
		}
	}
}