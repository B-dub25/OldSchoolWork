package inheritedLab;

public class Person {

	private String personsName;
	private int personsAge;

	public Person() {

		this.personsName = "";
		this.personsAge = 0;
	}

	public Person(String name, int age) {
		personsName = name;
		personsAge = age;
	}

	@Override
	public String toString() {
		return (personsName + " " + personsAge);
	}

	public boolean equals(Object obj) {
		if (obj == null)
			return false;
		else if (getClass() != obj.getClass())
			return false;
		Person other = (Person) obj;
		return (personsName.equals(other.personsName) 
				&& personsAge == other.personsAge);

	}
	
	public void setPersonsName(String personsName) {
		this.personsName = personsName;
	}
	
	public String getPersonsName() {
		return personsName;
	}
	
	public void setPersonsAge(int personsAge) {
		this.personsAge = personsAge;
	}
	
	public int getPersonsAge() {
		return personsAge;
	}

}
