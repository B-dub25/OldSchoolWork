package inheritedPerson;

public class Person {

	private String name;
	private int age;

	public Person() {
		this.name = "";
		this.age = 0;
	}

	public Person(String personsName, int personsAge) {
		this.name = personsName;
		this.age = personsAge;
	}

	@Override
	public String toString() {
		return (name + " " + age);
	}

	public boolean equals(Object obj) {
		if (obj == null)
			return false;
		else if (getClass() != obj.getClass())
			return false;
		Person anObject = (Person) obj;
		return (this.name.equals(anObject.name) && this.age == anObject.age);
	}

	public void setInfo(String n, int old) {
		this.name = n;
		this.age = old;
	}

	public void setName(String name) {
		this.name = name;
	}

	public void setAge(int age) {
		this.age = age;
	}

}
