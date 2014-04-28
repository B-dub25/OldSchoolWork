package doublyLinkedList;

public class Tester {

	public static void main(String[] args) {
		
		List<String> list = new List<>();
		List<String>.ListIterator<String> iterator = list.iterator();
		list.add("brian");
		
		list.add("sophia");
		
		list.add(3,"ophia");
		list.add(4,"dophia");
		
		//list.print();
		iterator.remove();
		iterator.reset();
		
		while(iterator.hasNext()){
			System.err.println(iterator.next());
		}
		
	}

}
