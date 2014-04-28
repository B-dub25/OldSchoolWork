/**
 * Created by Brian Rundel on 2/26/14.
 * Project name := COSCMP2
 */
public class DataStructure  {

    public static final int MAX = 100;
    private Stack<Integer> stack;
    private LinkedList<String,Integer> studentId;
    private LinkedList<String,Integer> studentFirstName;
    private LinkedList<String,Integer> studentLastName;
    private DataStructureRecord[] records;
    private int indexPointer;
    
    /**
     * Default constructor initializes all data 
     */
    public DataStructure(){

        initializeRecords();
        stack = new Stack<Integer>();
        studentId = new LinkedList<String,Integer>();
        studentLastName = new LinkedList<String, Integer>();
        studentFirstName = new LinkedList<String, Integer>();
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

        if(!stack.isEmpty()){
            int position = stack.pop();
            studentId.insert(id,position);
            studentLastName.insert(lName,position);
            studentFirstName.insert(fName,position);
            records[position].set(fName,lName,id);
        }
        else if(!studentId.contains(id)){
            studentId.insert(id,indexPointer);
            studentLastName.insert(lName,indexPointer);
            studentFirstName.insert(fName,indexPointer);
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

        int position = studentId.findItem(id);
        if(position >= 0){
            studentId.delete(position);
            studentLastName.delete(position);
            studentFirstName.delete(position);
            stack.push(position);
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

        int position = -1;
        if(studentId.findItem(id) >= 0);{
           
        	position = studentId.findItem(id);
        }
        return ((position >=0 ) ? position : -1);

    }
    /**
     * This routine will perform operations on database based on the input
     * the operation are listing the given field in the option order
     * @param field the field to do the operations on i.e First name, Last, or ID
     * @param option to perform i.e 1 for increasing 2 for decreasing. 
     */
    public void listIt(int field, int option) {

        if(field == 1){
        	listFName(option);
           
        }
        else if(field == 2)
            listLName(option);
        else
            listID(option);
    }
    /**
     * This routine will retrieve the student at the given position
     * @param position of the record to retrieve
     * @return the whole record of the student 
     */
    public String getRecord(int position) {

        return records[position].toString();
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
     * list id increasing order or decreasing order 
     * @param option of how to list it
     */
    private void listID(int option){

        if(option == 1){
            for(int index = 1; index < studentId.getSize()-1; ++index){
                int position = studentId.getItem(index);
                System.out.println(records[position]);
            }
        }
        else
            for(int index = studentId.getSize()-1; index > 0; --index){
                int position = studentId.getItem(index);
                System.out.println(records[position]);
            }
    }
    /**
     * This is routine is used by the {@link #listIt(int, int)}
     * to perform the given operation on the last name . i.e 
     * list first name increasing order or decreasing order 
     * @param option of how to list it
     */
    private void listFName(int option){

    	
        if(option == 1){
            for(int index = 1; index < studentFirstName.getSize()-1; ++index){
                int position = studentFirstName.getItem(index);
                     System.out.println(records[position]);
            }
        }
        else
            for(int index = studentFirstName.getSize()-1; index > 0; --index){
                int position = studentFirstName.getItem(index);
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
            for(int index = 1; index < studentLastName.getSize()-1; ++index){
                int position = studentLastName.getItem(index);
                System.out.println(records[position]);
            }
        }
        else
            for(int index = studentLastName.getSize()-1; index > 0; --index){
                int position = studentLastName.getItem(index);
                System.out.println(records[position]);
            }
    }

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