
@SuppressWarnings("serial")
public class InvalidOperator extends Exception{

	public InvalidOperator() {
		super("Invfalid operator entered \n");
	}
	public InvalidOperator(String message){
		super(message);
	}
}
