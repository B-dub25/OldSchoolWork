package fileProject;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.PrintWriter;
import java.util.Scanner;


public class FileHander {

	public static void main(String[] args) {
		PrintWriter myfilWriter = null;
		String yString = null;
		Scanner fileinput = new Scanner(System.in);
		File myFile = new File("Myfile.txt");
		try {
			if (myFile.exists()) {
				System.err.println("File exist ");
				System.out.println("Overwrite? ");
				yString = fileinput.next();
			}
			if (yString.charAt(0) == 'y')
				myfilWriter = new PrintWriter(new FileOutputStream(myFile));
			else 
			   myfilWriter = new PrintWriter(new FileOutputStream(myFile, true));

		} catch (FileNotFoundException e) {
			System.out.println("Not found");
		}
		myfilWriter.println("This file is been deleted and recreated!!!!!");
		myfilWriter.append("My file my file\n");
		myfilWriter.write("This is okay !!");
		myfilWriter.close();
		try {
			fileinput = new Scanner(new FileReader("Myfile.txt"));
		} catch (FileNotFoundException e) {
			System.out.println("Can't open file");
		}
		while (fileinput.hasNext()) {
			String myString = (String) fileinput.nextLine();
			System.out.print(myString + " ");
			System.out.println();
		}
		 fileinput.close();		
	}

}
