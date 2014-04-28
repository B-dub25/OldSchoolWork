package inheritedLab;

public class Family {

	Person[] myFamily;
	static int index = 0;
	
	public Family(int sizeOfFamily) {
		myFamily = new Person[sizeOfFamily];
	}
	
	public void addPerson(Person p) {
	    boolean found = false;
		for (int i = 0; i < index; i++)
			if(myFamily[i].equals(p))
				found = true;
		if (!found) {
			myFamily[index] = p;
			index++;
		}
		else
		System.out.println(p + " is in family already");
	}
	
	public void printOutFamily() {
		for(int i = 0 ; i < index ; ++i)
           System.out.println(myFamily[i]);
	}
}
