package execptionproject;

@SuppressWarnings("serial")

public class DivitionByZero extends Exception{

	public DivitionByZero() {
		super("Can't devide by zero");
	}

	public DivitionByZero(String message) {
		super(message);
	}
}
