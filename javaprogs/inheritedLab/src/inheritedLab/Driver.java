package inheritedLab;

public class Driver {

	public static void main(String[] args) {

		Person fred = new Person("Fred Flintstone", 50);
		System.out.println("created " + fred);

		Person wilma = new Person("Wilma Flintstone", 48);
		Student george = new Student("George Flintstone", 21, "Politics", 3.1);
		System.out.println("created " + george);

		Student sue = new Student("Sue Flintstone", 24, "Nursing", 3.3);
		Student anotherGeorge = new Student("George Flintstone", 21, "Math",
				3.4);
		Person yetAnotherGeorge = new Person("George Flintstone", 21);

		Family f = new Family(10);
		f.addPerson(fred);
		f.addPerson(wilma);
		f.addPerson(george);
		f.addPerson(sue);
		f.addPerson(anotherGeorge);
		f.addPerson(yetAnotherGeorge);

		anotherGeorge.setPersonsName("Georgie Flintstone");
		f.addPerson(anotherGeorge);

		f.printOutFamily();

	}

}
