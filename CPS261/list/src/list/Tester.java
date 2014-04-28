package list;

public class Tester {

	public static void main(String[] args) {
		List<String> list = new List<>();
		List<String> otherList =null;
		list.add("brian");
		list.add("naomi");
		String[] tempStrings = list.toArray();
		otherList = list.clone();
		System.out.println(otherList);
		
	}
}
