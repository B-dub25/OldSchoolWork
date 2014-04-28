package linker;

public class Tester {

	public static void main(String[] args) {
		LinkList<String> myLinkList = new LinkList<>();
		for (char i = 'z'; i >= 'a'; i--){
			myLinkList.pushBack(String.valueOf(i));
			
		}
		
		System.err.println(myLinkList);

	}

}
