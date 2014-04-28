package fileHandeler;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.PrintWriter;
import java.util.Scanner;

public class MyfileHandeler {

	public static void main(String[] args) {

		PrintWriter myFileWriter = null;
		File myFile = null;
		String answer = " ", input = " "; 
		Scanner inScanner = new Scanner(System.in);
		try {
			
			myFile = new File("mystuff.txt");
			if (myFile.exists()) {
				System.out.println(myFile + " exist already. Overwrite ? ");
				answer = inScanner.next(); 
			}
			if (answer.charAt(0) == 'y')
			 myFileWriter = new PrintWriter(new FileOutputStream(myFile));
			else
			 myFileWriter = new PrintWriter(new FileOutputStream(myFile,true));
			System.out.println("Please enter the phrase. press -1 to quit");
			input = inScanner.nextLine(); 
			while (!input.contains("-1")){
				myFileWriter.println(input);
				System.out.println("Please enter the phrase. press -1 to quit");
				input = inScanner.nextLine();
			}
			myFileWriter.close();
			inScanner.close();
			inScanner = new Scanner(myFile);
			
			while (inScanner.hasNextLine() ) {
				  input = inScanner.nextLine();
				  System.out.println(input);
			}
			 inScanner.close();
		} catch (FileNotFoundException e) {

		}
          
	}

}
