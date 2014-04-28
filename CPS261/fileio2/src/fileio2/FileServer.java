package fileio2;

import java.util.Date;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.io.PrintStream;
import java.io.PrintWriter;

public class FileServer extends EchoServer {

	StringTokenizer parseCommand;
	PrintStream outPutPs = null;

	public void delete() {

		File myFile = getFile();
		outPutPs.println("=====>");
		outPutPs.println("Processing: delete " + myFile);

		if (myFile.exists()) {
			outPutPs.println("deleting " + myFile.getAbsolutePath());
			myFile.delete();
		} else
			outPutPs.println(myFile.getAbsolutePath() + " does not exist ");

		outPutPs.println("*******************************************");
	}

	/**
	 * This method renames a file to a new name that is given as a argument . It
	 * does not expect the file to exist it checks if the file exists and then
	 * renames it.
	 * 
	 */
	public void rename() {

		File myFile = getFile();
		File newNameFile = getFile();

		outPutPs.println("=====>");
		outPutPs.println("Processing rename " + myFile + " " + newNameFile);

		if (myFile.exists()) {
			myFile.renameTo(newNameFile);
			outPutPs.println("Successful rename ");
		} else
			outPutPs.println(myFile.getAbsolutePath() + " : Does not exist ");

		outPutPs.println("*******************************************");

	}

	/**
	 * This method gets the directory name and checks to see if it exist and
	 * makes sure it's not empty. There is no reason to create a File[] if the
	 * directory is empty and go through the listing files process .
	 */
	public void list() {

		File directoryToList = getFile();

		outPutPs.println("=====>");
		outPutPs.println("Processing: list " + directoryToList);

		if (directoryToList.isDirectory() && directoryToList.list().length != 0) {
			File[] fileList = directoryToList.listFiles();
			outPutPs.println("Listing files for "
					+ directoryToList.getAbsolutePath());
			for (int i = 0; i < fileList.length; i++)
				//if (fileList[i].isFile())
					outPutPs.println(fileList[i]);
		} else {
			outPutPs.println("Invaild : " + directoryToList.getName()
					+ " is not a directory or empty");
		}
		outPutPs.println("*******************************************");
	}

	/**
	 * Size returns the size of the file and it also converts the returned bytes
	 * into kilobytes
	 */
	public void size() {

		File myFile = getFile();
		outPutPs.println("=====>");
		outPutPs.println("Processing: size " + myFile.getAbsolutePath());

		if (myFile.exists()) {
			outPutPs.println("Size of " + myFile + " is "
					+ (myFile.length() + " bytes "));
		} else
			outPutPs.println(myFile + ": Does not exist ");
		outPutPs.println("*******************************************");
	}

	public void lastModified() {

		File myFile = getFile();
		Date modifiedDate = null;

		outPutPs.println("=====>");
		outPutPs.println("Processing: lastModified " + myFile);

		if (myFile.exists()) {
			modifiedDate = new Date(myFile.lastModified());
			outPutPs.println(myFile.getAbsolutePath()
					+ " was last modified on " + modifiedDate);
		} else
			outPutPs.println(myFile.getAbsolutePath() + " does not exist ");
		outPutPs.println("*******************************************");
	}

	public void mkdir() {
		File newDirectory = getFile();

		outPutPs.println("=====>");
		outPutPs.println("Processing: mkdir " + newDirectory);

		if (!newDirectory.exists()) // protect against overwriting
		{
			outPutPs.println("Making directory PATH = "
					+ newDirectory.getAbsolutePath());
			newDirectory.mkdirs();
		} else
			outPutPs.println("Directory already exists ");
		outPutPs.println("*******************************************");
	}

	public void createFile() {
		File newFile = getFile();
		PrintWriter inPrintWriter = null;

		outPutPs.println("=====>");
		outPutPs.println("Processing createFile " + newFile);

		try {
			newFile.createNewFile();
			inPrintWriter = new PrintWriter(newFile);

			outPutPs.println("creating new file in PATH = "
					+ newFile.getAbsolutePath());

			while (parseCommand.hasMoreTokens()) {
				String temp = getNextToken();
				inPrintWriter.println(temp);
			}
			inPrintWriter.flush();
			inPrintWriter.close();

		} catch (IOException e) {
			outPutPs.println("could not create file "
					+ newFile.getAbsolutePath());
		}

		outPutPs.println("*******************************************");
	}

	public void printFile() {

		Scanner outScanner = null;
		File FileToPrint = getFile();
		outPutPs.println("=====>");
		outPutPs.println("Processing: printFile " + FileToPrint);
		try {
			outScanner = new Scanner(new FileInputStream(FileToPrint));

			outPutPs.println("Printing contents of "
					+ FileToPrint.getAbsolutePath());

			while (outScanner.hasNext()) {
				String string = (String) outScanner.next();
				outPutPs.println(string);
			}
			outScanner.close();
		} catch (FileNotFoundException e) {//
			outPutPs.println("Can not print file " + FileToPrint
					+ " : Does not exist or insufficient permissions ");
		}
		outPutPs.println("*******************************************");
	}

	void printUsage() {
		outPutPs.println("=====>");
		outPutPs.println("Processing ?");
		outPutPs.println("? : Display commands\n"
				+ "createFile: Creates file\n"
				+ "printFile : Prints the contents of a file");
		outPutPs.println("lastModified : Prints date of a files last modifacation date\n"
				+ "size: Displays the size of a single file\n"
				+ "rename : renames a file ");
		outPutPs.println("mkdir : Makes a directory of given name\n"
				+ "delete : Deletes a file");
		outPutPs.println("list : lists files in directory given ");

		outPutPs.println("*******************************************");
		
	}

	/**
	 * 
	 * @return returns the next token from instance variable parseCommand.
	 *         Returns null if there is non left.
	 */

	private String getNextToken() {
		if (parseCommand.hasMoreTokens())
			return parseCommand.nextToken();
		else
			return null;
	}

	private File getFile() {
		File f = null;
		String fileName = getNextToken();
		if (fileName == null)
			outPutPs.println("Missing a File name");
		else
			f = new File(fileName);

		return f;
	}

	/**
	 * 
	 * @param line
	 *            Processes String argument to get command
	 * 
	 * @return will return true as long as the argument line is not null
	 */
	boolean processCommandLine(String line) {

	    String command = null;
	    
		if (line == null)
			return false;

		this.parseCommand = new StringTokenizer(line);
		
		command = getNextToken();
		if(command == null)
			command = " ";
		switch (command) {
		case "?":      printUsage(); break;
		case "quit":   return false;
		case "delete": delete(); break;
		case "rename": rename(); break;
		case "size":   size();   break;
		case "lastModified":lastModified(); break;
		case "list": list();  break;
		case "printFile":  printFile(); break;
		case "createFile": createFile();break;
		case "mkdir": mkdir(); break;
		default:
			outPutPs.println("====>\nProcessing: " + command + "\n"
					+ "Unreconized command " + command);	
		}
		outPutPs.println();
	
		return true; 
	}
	void processStream(InputStream is, OutputStream os)
    {
       
        Scanner input = new Scanner(is);
        PrintStream ps = new PrintStream(os);
        outPutPs = ps;
        String line = " ";
       
        line = input.nextLine();
        
        while (processCommandLine(line)){
               line = input.nextLine(); 
        }
        
       
        input.close();
        ps.close();
        System.out.println("Exitting processStream");
    }
	
	public static void main(String[] args) {
		
		FileServer fServer = new FileServer();
		fServer.monitorServer();
		
	}
}
