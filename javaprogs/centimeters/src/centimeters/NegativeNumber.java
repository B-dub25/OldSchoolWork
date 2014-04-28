package centimeters;
 
@SuppressWarnings("serial")
public class NegativeNumber extends Exception {

	public NegativeNumber() {
		super("Negative number not allowed");
	}
	public NegativeNumber(String message) {
		super(message);
	}
}
