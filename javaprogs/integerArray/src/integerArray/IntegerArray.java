package integerArray;

public class IntegerArray {

	public static void main(String[] args) {

		int[] myinteger = createIntegers(10);
		printIntegers(myinteger);
	}

	public static int[] createIntegers(int max) {
		int[] myarray = new int[max]; 
		for (int i = 1; i < myarray.length; i++)
			myarray[i] = myarray[i-1] + 100;
		return myarray;
	}
    public static void printIntegers(int[] array) {
		for (int i : array)
			System.out.println(i);
	}
}
