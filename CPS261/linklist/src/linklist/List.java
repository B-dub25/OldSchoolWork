package linklist;

public class List {

	public static void main(String[] args) {
		
		LinkList<String> myLinkList = new LinkList<>();
	
		myLinkList.push("b");
		myLinkList.push("a");
		myLinkList.pushBack("z");
		myLinkList.insert("zz");
		myLinkList.push("t");
		System.out.println(myLinkList);
		myLinkList.sort();
		System.out.println(myLinkList);

	}

}
