
/**
 * This will be the main driver program for many of your programs. Specifically,
 * you will need to define a data structure and related algorithms to use with this program.
 * We will be using the data file I have provied for you: a file of 68 records. Each record is composed
 * of three fields:
 *      String lastName
 *      String firstName
 *      String ID
 * ID may be implemented as an integer, but it is easier to implement as a string. Both lastName and firstName
 * may not be unique, but the ID **is** unique.
 * 
 * @author Bill Sverdlik
 * @version Version 1.0
 */




/*
 * IMPORTANT!!!!!!
 * Your projects should not contain any code in this file that modifies the class DataStructure directly.
 * You may find it convenient (but not required) that the file DataStructure contain an inner class.

*/


import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.*;



public class COSC311Driver
{

	static DataStructure myStructure = new DataStructure();
    static Scanner keyboard=new Scanner(System.in);
    
    public static void main(String[] args)
    {
        /*The following declaration declares a data structure that will change from one assignment to the next. For example, you will need to implement 
         * the following as a doubly linked list, as well as a tree.
         */ 
        
        int response;
        String fName = null, lName = null, id = null;
        File dataFile = new File("DataSet.txt");
        Scanner fileScanner = null;
        try {
			 fileScanner = new Scanner(new FileInputStream(dataFile));
			 
	        while(fileScanner.hasNext()){
	       	 fName = fileScanner.next();
	       	 lName = fileScanner.next();
	       	 id = fileScanner.next();
	       	 myStructure.insert(fName, lName, id);	      
	        }
	       
			fileScanner.close();
			 
		} catch (FileNotFoundException e) {
			// TODO: handle exception
		}
        do
        {
            System.out.println(" 1 Add a new student");
            System.out.println(" 2 Delete a student");
            System.out.println(" 3 Find a student by ID");
            System.out.println(" 4 List students by ID increasing");
            System.out.println(" 5 List students by first name increasing");
            System.out.println(" 6 List students by last name increasing");
            System.out.println(" 7 List students by ID decreasing");
            System.out.println(" 8 List students by first name decreasing");
            System.out.println(" 9 List students by last name decreasing");
            System.out.println(" ");
            System.out.println(" 0 End");
            
            response=keyboard.nextInt();
            
            switch (response)
            {
                case 1: addIt();
                        break;
                case 2: deleteIt();
                        break;
                case 3: findIt();
                        break;
                case 4: listItIncreasingID();		// or see below for programming trick
                        break;
                case 5: listItIncreasingfName();	
                        break;
                case 6: listItIncreasinglName();
                        break;
                case 7: listItDecreasingID();
                        break;
                case 8: listItDecreasingfName();
                        break;
                case 9: listItDecreasinglName();
                        break;
                default:                
            }
            
        } while (response!=0);
        
        
        
        
    }
    
    // OK Folks. I won't write all of these, but I'll give you an idea
    
    // Case 1: Add a new student. We need a unique ID number
    
    public static void addIt()
    {
        String name1,name2,tempID;
        boolean found;
        
        do
        {
            System.out.println("Enter a unique ID number to add");
            tempID=keyboard.next();
        
            //is it unique ?
            found=(myStructure.search(tempID) >= 0);
            if (found)
            {
                System.out.println("ID already in use");
                System.out.println("Please re-enter a unique ID");
            }
        }
       while (found);
       
       // We found a unique ID. Now ask for first and last name
       
       System.out.println("Enter first name");
       name1=keyboard.next();
       System.out.println("Enter last name");
       name2=keyboard.next();
       
       // add to our data structure
       myStructure.insert(name1,name2,tempID);
    }


    // Case 2: delete a student. A student ID must be prompted for. If the ID number does not exist in the database,
    //    print out a message indicating a such, otherwise delete the entire record

    public static void deleteIt()
    {
    	String id = null;
        System.out.print("Please enter the student ID number : ");
        id = keyboard.next();
        
        if(myStructure.deleteIt(id))
        	System.out.println("Student ID  number " + id + " was deleted ");
        else
      	  System.out.print("Student ID  number " + id + " doesn't exist ");

    }

    //Case 3: find a student. A student ID must be prompted for. If the ID number is not found, print out a
    //    message indicating as such. Otherwise print out the entire record

    public static void findIt()
    {
      String id = null; int position = 0;
      System.out.println("Please enter the student ID number : ");
      id = keyboard.next();
      position = myStructure.search(id);
      if( position >= 0)
    	  System.out.println(myStructure.getRecord(position));
      else
    	  System.out.println("Student ID  number " + id + " doesn't exist ");
   
    }
        
    // Cases 4,5,6,7,8,9
    // A little programming trickery. All of the listing methods below can call the SAME method in DataStructure.
    // We'll pass 2 parameters: the first indicates which field, the second indicates which order
    // fieldNum=1 first name
    // fieldNum=2 last name
    // fieldNum=3 ID
    // orderNum=1 increasing
    // orderNum=2 decreasing
    
    public static void listItIncreasingID()
    {
        myStructure.listIt(3,1);
    }
                        
    public static void listItDecreasingID() {
    	myStructure.listIt(3, 2);
    }

    public static void listItIncreasingfName()
    {
        myStructure.listIt(1,1);
    }
    public static void listItDecreasingfName() {
    	myStructure.listIt(1, 2);  		
    }
                        
    public static void listItIncreasinglName()
    {
        myStructure.listIt(2,1);
    }
    public static void listItDecreasinglName() {
		myStructure.listIt(2, 2);
	}
           
        
}    
