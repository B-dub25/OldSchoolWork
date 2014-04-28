package test;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Test {

	public static void main(String[] args) {
		StringTokenizer tokenizer;
		File myFile = new File("tester.txt");
		String myString = "This is a fiels\nfiles and files";
		PrintWriter myPrintWriter = null;
		Scanner myScanner = new Scanner(System.in) ;
		tokenizer = new StringTokenizer(myString);
		try {
			myScanner = new Scanner(myFile);
			
		} catch (FileNotFoundException e) {
			// TODO: handle exception
		}
		while (tokenizer.hasMoreElements()) {
			String object = (String) tokenizer.nextElement();
			System.out.println(object);
			
		}
		

	}
}
