package booleanArray;

public class BoolArray {

	public static void main(String[] args) {
		boolean[] arr = new boolean[10];
		fillBoolean(arr);
		printBoolean(arr);
	}

	public static void fillBoolean(boolean[] myarray) {
		for (int i = 1; i < myarray.length; i++) {
			if (myarray[i - 1] == false)
				myarray[i] = true;
			else
				myarray[i] = false;
		}
	}

	public static void printBoolean(boolean[] myarray) {
		for (int i = 0; i < myarray.length; i++)
			System.out.println(myarray[i]);
	}

}
