package fileio;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.PrintStream;
import java.util.Scanner;

public class Concat {

    public void copy(InputStream is, PrintStream ps) {

        Scanner infileScanner = new Scanner(is);
        while (infileScanner.hasNext()) {
            String temp = (String) infileScanner.nextLine();
            ps.println(temp);
        }
        infileScanner.close();
    }

    void concat(String[] inFiles, int numInputs, String outFile) {

        File myOutPutFile = null;
        

        if (inFiles.length == 0) {
        	copy(System.in, System.out);
        }
        

        // Check for invalid file extensions, or bad permissions on files and if
        // it exists.
        for (int i = 0; i < numInputs; i++) {
            if (!(new File(inFiles[i]).canRead())
                    || !(new File(inFiles[i]).exists()))
                throw new RuntimeException("Unable to open " + inFiles[i]
                        + " check to see if it exists ");
            else if (!(inFiles[i].substring((inFiles[i].indexOf("."))).equals(".txt"))
                    && !(inFiles[i].substring(inFiles[i].indexOf(".")).equals(".java")))
                throw new RuntimeException("Bad file suffex : "
                        + inFiles[i].substring(inFiles[i].indexOf(".")));
        }

        try {
            if (outFile == null)
                for (int i = 0; i < numInputs; i++) {
                    copy((new FileInputStream(inFiles[i])), System.out);
                }
            else {
                myOutPutFile = new File(outFile);
                for (int i = 0; i < numInputs; i++) {
                    copy(new FileInputStream(inFiles[i]), new PrintStream(
                            new FileOutputStream(myOutPutFile, true)));
                }
            }
            
        }catch (FileNotFoundException e) {
            System.out.println("File not fount or don't have permissions on file."
                            + "\n Please check and try again");
        }
    }

    public void process(String[] args) {
        switch (args.length) {
        case 0:
            System.out.println("No input files, defaulting to reading from the keyboard and writing to the screen");
            concat(args, 0, null);
            break;
        case 1:
            System.out.println("No output file, defaulting to writing to the screen");
            concat(args, 1, null);
            break;
        default:
            concat(args, args.length - 1, args[args.length - 1]);
            break;
        }
    }

    public static void main(String[] args) {
        Concat concat = new Concat();
        try {
        	
            concat.process(args);
        } catch (RuntimeException e) {

            System.out.println(" Error in Concat:" + e);
        }
    }
}