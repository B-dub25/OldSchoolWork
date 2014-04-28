package bank;
@SuppressWarnings("serial")
public class InvalidAmount extends Exception {
	
	public InvalidAmount() {
		super("Invalid Entery . Please try again ");
	}
	public InvalidAmount(String message){
		super(message);
	}

}
