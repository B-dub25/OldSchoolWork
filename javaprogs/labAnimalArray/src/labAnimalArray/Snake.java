package labAnimalArray;

public class Snake extends Animal {

	private int numberOfFangs;

	public Snake() {
		numberOfFangs = 0;
	}

	public Snake(String name, double pounds, int old, int fangs) {
		super(name, pounds, old);
		this.numberOfFangs = fangs;
	}

	public String makeNoise() {
		return ("Hisssssssss");
	}

	public String toString() {
		return (super.toString() + "\nNumber of Fangs: " + numberOfFangs);
	}
}
