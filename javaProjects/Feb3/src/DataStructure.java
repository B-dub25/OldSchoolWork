/**
 * 
 * @author Brian Rundel
 * 
 * Note : All private methods are located toward the bottom of the class
 * labeled as helper methods 
 *
 */
public class DataStructure implements Maximum{

   private int indexPointer;
   private Stack deletedStack;   
   private DataStructureRecord[] records;
   private SortedArray<String>   studentId;
   private SortedArray<String>   studentFName;
   private SortedArray<String>   studentLName;
   
   /**
    * Default constructor initializes all data 
    */
   public DataStructure() {

	initializeRecords();
	studentId = new SortedArray<>();
	studentFName = new SortedArray<>();
	studentLName = new SortedArray<>();
	indexPointer = 0;
	deletedStack = new Stack();   
   }
   
   /**
    * This routine is will insert the given parameters into the database
    * It invokes the Stacks isEmpty routine to make sure there is not an
    * open spots right off bat. Otherwise it will invoke the SortedArray class
    * to find to ensure the students ID are unique. If they are not the items will
    * not be entered into the database    
    * @param fName the First name of the student 
    * @param lName the last name of the student
    * @param id the id number of the student
    */
   
   public void insert(String fName, String lName, String id){
	
	   if(!deletedStack.isEmpty()){
		   int position = deletedStack.pop();
		   studentId.insertID(id, position);
		   studentFName.insertName(fName, position);
		   studentLName.insertName(lName, position);
		   records[position].set(fName, lName, id);
	   }
	   else if(studentId.find(id) < 0){
		   studentId.insertID(id, indexPointer);
		   studentFName.insertName(fName, indexPointer);
		   studentLName.insertName(lName, indexPointer);
		   records[indexPointer].set(fName, lName, id);
		   ++indexPointer;
	   }
	  
   }
   /**
    * This routine will delete a given student if they exist.
    * If the student is in the database they will be deleted and 
    * the index location will be pushed on the stack as an open 
    * location and it will update all the SortedArray(s) at the 
    * same time. 
    * @param id of the student to be deleted
    * @return true if delete was successful false if not 
    */
   public boolean deleteIt(String id) {
	
	   int position = studentId.find(id);
	   if(position >= 0){
		    studentId.remove(position);
		    studentFName.remove(position);
		    studentLName.remove(position);
		    deletedStack.push(position);
		   
	   }
	   return (position >= 0);
   }
   
   // Getters
   /**
    * This routine will search for a student by id number
    * to see if they are located within the database
    * @param id of the student to search for
    * @return the index location of the student.
    */
   public int search(String id) {
	
	   int position = studentId.findID(id);
	   return ((position >=0 ) ? studentId.getIndexRecord(position) : -1);
   }
   
   /**
    * This routine will retrieve the student at the given position
    * @param position of the record to retrieve
    * @return the whole record of the student 
    */
   public String getRecord(int position) {
	
	   return records[position].toString();
   }
   /**
    * This routine will perform operations on database based on the input
    * the operation are listing the given field in the option order
    * @param field the field to do the operations on i.e First name, Last, or ID
    * @param option to perform i.e 1 for increasing 2 for decreasing. 
    */
   public void listIt(int field, int option) {
	
	   if(field == 1)
		   listFName(option);
	   else if(field == 2)
	        listLName(option);
	   else
		   listID(option);
   }
   
   //Helper methods 
   /**
    * This routine is used for initializing the records array to keep the 
    * constructor clean and short.
    */
   private void initializeRecords(){
	   records = new DataStructureRecord[MAX];
	   for(int i = 0 ; i < MAX; ++i)
		   records[i] = new DataStructureRecord();
   }
   /**
    * This is routine is used by the {@link #listIt(int, int)}
    * to perform the given operation on the first name . i.e 
    * list first name increasing order or decreasing order 
    * @param option of how to list it
    */
   private void listFName(int option){
	
	   if(option == 1){
		   for(int index = 0; index < studentFName.getSize()-1; ++index){
			   int position = studentFName.getIndexRecord(index);
				   System.out.println(records[position]);
		   }
       }
	   else
		   for(int index = studentFName.getSize()-1; index >= 0; --index){
			   int position = studentFName.getIndexRecord(index);
				   System.out.println(records[position]);
		   }
   }
   /**
    * This is routine is used by the {@link #listIt(int, int)}
    * to perform the given operation on the last name . i.e 
    * list last name increasing order or decreasing order 
    * @param option of how to list it
    */
   private void listLName(int option){
	   
	   if(option == 1){
		   for(int index = 0; index < studentLName.getSize()-1; ++index){
			   int position = studentLName.getIndexRecord(index);
				   System.out.println(records[position]);
		   }
       }
	   else
		   for(int index = studentLName.getSize()-1; index >= 0; --index){
			   int position = studentLName.getIndexRecord(index);
				   System.out.println(records[position]);
		   }
   }
   /**
    * This is routine is used by the {@link #listIt(int, int)}
    * to perform the given operation on the student id's . i.e 
    * list student id's  increasing order or decreasing order 
    * @param option of how to list it
    */
   private void listID(int option){
	   
	   if(option == 1){
		   for(int index = 0; index < studentId.getSize()-1; ++index){
			   int position = studentId.getIndexRecord(index);
				   System.out.println(records[position]);
		   }
       }
	   else
		   for(int index = studentId.getSize()-1; index >= 0; --index){
			   int position = studentId.getIndexRecord(index);
				   System.out.println(records[position]);
		   }
   }   
   /**
    * This is an inner class that makes up the array of the {@link #DataStructure()}
    * The reason it private is there is no need to make an object of this outside of 
    * the class. It entails three string objects , one for the student id, first name
    * and last name. It has a method in for easy insertion, and a toString to return a
    * string representation of the data stored
    */
// inner class	
private class DataStructureRecord{
		
	private	String id;
	private	String lastName;
	private	String firstName;
	
	/**
	 * Default constructor to initialize the strings variable to null string 
	 */
	private DataStructureRecord(){
		
		id = "";
		lastName = "";
		firstName = "";
	}
	/**
	 * This method is to set the given data	for the outer class. 
	 * Even though we can call the variables from the outer class
	 * this routine makes for much easier and cleaner code.  
	 * @param fName the first name of the student
	 * @param lName the last name of the student
	 * @param studentID the id of the student
	 */
    private void set(String fName, String lName, String studentID){
    	
    	firstName = fName;
    	lastName  = lName;
    	id        = studentID;	
    }
    
    @Override
    public String toString(){
	   return (id + "\t" + firstName + "\t" + lastName + "\t");
	}
}
}
