import java.util.Scanner;

public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		
		Inventory[] mylist = new Inventory[10];
		int inventoryId ;
		Scanner input = new Scanner(System.in);
		for (int i = 0 ; i < 5; ++i) {
			System.out.println("Enter store Id and name ");
		    inventoryId = input.nextInt();
		    String name = input.next();
			mylist[i] = new Inventory(inventoryId, name);	
		}
         Inventory.sort(mylist,5);
         for (int i = 0; i < 5; i++) {
        	 System.out.println(mylist[i]);
		}
         input.close();
	}
}