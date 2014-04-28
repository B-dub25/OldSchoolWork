package myStack;

public class Tester {

	public static void main(String[] args) {
     
		MyStack<String> myStack = new MyStack<>();
		myStack.push("ama");
		myStack.push("naomi");
		myStack.push("sophia");
		myStack.push("brian");
		
		while(myStack.empty()){
			System.err.println(myStack.top());
			myStack.pop();
		
		}
	}
}
