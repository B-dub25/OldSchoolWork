package myList;

public class Tester {

	public static void main(String[] args) {
	MyList<String> list = new MyList<>();
	list.add("brian");
	list.remove();
	list.add(1, "sophia");
	
	list.add("ophia");
	
 	System.out.println(list);
	
	}

}
