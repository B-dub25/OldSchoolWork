package labInherited;

public class Person {

	private String personsName;
	private int personsAge;

	public Person() {
		personsName = "Unknown";
		personsAge = 0;
	}

	public Person(String name, int age) {
		this.personsName = name;
		this.personsAge = age;
	}
    public Person(Person obj){
    	this(obj.personsName,obj.personsAge);
    }
    public Person clone(){
    	return new Person(this);
    }
	@Override
	public String toString() {

		return ("Name " + personsName + " Age " + personsAge + " ");
	}

	@Override
	public boolean equals(Object obj) {
		if (obj == null) {
			return false;
		} else if (getClass() != obj.getClass()) {
			return false;
		}
		Person tempPerson = (Person)obj;
		return (this.personsName.equals(tempPerson.personsName) 
				&& (this.personsAge == tempPerson.personsAge));
	}

	public void setPersonsName(String newpersonName) {
		this.personsName= newpersonName;
	}

	public void setPersonsAge(int personsAge) {
		this.personsAge = personsAge;
	}

	public int getPersonsAge() {
		return personsAge;
	}

	public String getPersonsName() {
		return personsName;
	}
}
