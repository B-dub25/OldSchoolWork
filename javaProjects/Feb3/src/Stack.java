/**
 * 
 * @author Brian Rundel
 * A simple stack class to use a FILO operation
 * for future classes. This will hold in my case the 
 * empty positions of deleted indexes in DataStructures class   
 * I tried to make this as much as java standard as possible 
 * using an array. ( real one are implemented with linked lists)
 */

public class Stack implements Maximum{

	private int[] stack;
	private int stackPointer;
	
	/**
	 * default constructor
	 * defaults the number of items to MAX = 100; 
	 * and the {@link #stackPointer} to -1
	 */
	public Stack() {

		stack = new int[MAX];
		stackPointer = -1;
	   
	}
	/**
	 * This routine will increment {@link #stackPointer} then pushes an 
	 * item to the end of the list
	 * @param element the element to be put on the stack
	 */
	public void push(int element) {
		
		stack[++stackPointer] = element;
		
		
	}
	/**
	 * This routine retrieves the last item on the 
	 * stack and then decrements the pointer 
	 * @return the element of the stack
	 */
	
	public int pop() {
		final int tempE = stack[stackPointer];
		stackPointer--;
		
		return  tempE;
	}
	/**
	 * This routine checks to see if the stack is empty
	 * @return true if the stack is empty false otherwise
	 */
	public boolean isEmpty() {
		return (stackPointer == -1);
	}
	/**
 	 * This routine will search for an element in the stack
 	 * using sequential search seems how stacks are not ordered
	 * @param target
	 * @return true if the element is in the stack false otherwise
	 */
	public boolean search(int target){
		
		for(int i = 0 ; i < stackPointer ; ++i)
	    	  if(stack[i] == target){
	    	  return true;
	    	  }
        return false;
	}
}
