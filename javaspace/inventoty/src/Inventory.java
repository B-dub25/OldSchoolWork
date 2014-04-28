
@SuppressWarnings("rawtypes")
public class Inventory implements Comparable{

	private int inventoryId;
	private String nameString;
	public Inventory() {
		inventoryId = 0;
	}
	public Inventory(int inventoryId, String name) {
		this.inventoryId = inventoryId;
		this.nameString = name;
	}
	public void setInventoryId(int inventoryId, String name) {
		this.inventoryId = inventoryId;
		this.nameString = name;
	}
	public int getInventoryId() {
		return inventoryId;
	}
	public int compareTo(Object id) {
		if(id instanceof Inventory){
		    Inventory otherInventory = (Inventory)id;
		if( otherInventory.inventoryId > this.inventoryId)
			return -1;
		else if (otherInventory.inventoryId < inventoryId)
			return 10;
		else if ( otherInventory.inventoryId == inventoryId) 
			return 0;
		}
		return 9;
	}
	@SuppressWarnings("unchecked")
	public static void sort(Comparable[] a, int size) {
		Comparable tempComparable = null;
		int smallest = 0;
		for (int i = 0; i < size; i++) {
			smallest = i;
			for(int n = 1+i ; n < size ; ++n)
				if(a[smallest].compareTo(a[n]) > 0)
					smallest = n;
		
		tempComparable = a[i];
		a[i] = a[smallest];
		a[smallest] = tempComparable;
		}
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return (inventoryId + " " + nameString);
	}
}
