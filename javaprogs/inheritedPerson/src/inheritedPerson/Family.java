package inheritedPerson;

public class Family {
	
	private Person[] myFamily;
	private int index;
	
	public Family() {
		myFamily = new Person[20];
		index = 0;
	}
	public Family(int size_of_family) {
		myFamily = new Person[size_of_family];
		index = 0;
	}
	public void addPerson(Person p) {
		boolean found = false;
		for (int i = 0; i < index; i++) {
			   if (myFamily[i].equals(p)) {
				System.out.println(myFamily[i] + " is already in famiiy");
				found = true;
			   }
		}
			   if(!found) {
				   myFamily[index] = p;
				   index++;
		}
		}
	}
         