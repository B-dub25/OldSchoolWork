package labInherited;

public class Family {

	private int index = 0;
	private Person[] myFamily;

	public Family() {
		myFamily = new Person[20];
	}

	public Family(int sizeOfFamily) {
		myFamily = new Person[sizeOfFamily];
	}

	public Family(Family obj) {
		myFamily = new Person[obj.myFamily.length];
		for (int i = 0; i < obj.index; i++)
			this.myFamily[i] = obj.myFamily[i].clone();
		this.index = obj.index;
	}

	public Family clone() {
		return new Family(this);
	}

	public void addPerson(Person otherPerson) {
		boolean found = false;
		for (int i = 0; i < index; i++)
			if (myFamily[i].equals(otherPerson))
				found = true;
		if (!found) {
			myFamily[index] = otherPerson;
			++index;
		} else {
			System.out.println(otherPerson + " already in family");
		}

	}

	public void printOutFamily() {
		for (int i = 0; i < index; i++) {
			System.out.println(myFamily[i] + " " + index);
		}
	}
}