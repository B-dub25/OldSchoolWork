import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.PrintWriter;
import java.util.Scanner;

public class FilesTest {

	public static void main(String[] args) {
		Scanner reader = null;
		PrintWriter outpPrintWriter = null;
		int max = 0, smaller = 0;
		String tempString;
		try {
			reader = new Scanner(new File("myfile.txt"));
			outpPrintWriter = new PrintWriter(new FileOutputStream("out.txt",
					true));
		} catch (FileNotFoundException e) {
			System.out.println(e);

		}
		while (reader.hasNext()) {
			if (reader.hasNextInt()) {
				max = reader.nextInt();
				if (max < smaller)
					max = smaller;
			} else {
				tempString = reader.next();
			}
		}
		outpPrintWriter.println("Max value is " + max);
		outpPrintWriter.close();
	}

}
