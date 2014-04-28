package execptionproject;

@SuppressWarnings("serial")

public class NegativeNumber extends Exception {
	
	public NegativeNumber() {
		   super("Negative Number execption thrown");
	}
	public NegativeNumber(String message) {
		super(message);
	}

}
