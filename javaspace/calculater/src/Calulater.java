import java.util.Scanner;


public class Calulater {
	private Scanner input = new Scanner(System.in);
	private String operator;
	private double result;
	
	public Calulater() {
		operator = "";
		result = 0.0;
		calculation();
	}
	
	private void calculation() {
		String answerString = "Y";
		do {
		System.out.println("Please enter a operator and then a number \n");
			while(true){
			 try {
			operator = input.next();
			  if(!operCheck(operator.charAt(0)))
				throw new InvalidOperator();
			  else
			  {
				  doCalculations(returnResult(operator), operator.charAt(0));
				  break;
			  }
				  //TODO implement calculation and take away the ; after else . 
			  
			} catch (InvalidOperator e) {
				System.out.println(e.getMessage());
				input.nextLine();
			}
			
			}
			System.out.println(" Result = " + result + "\n");
			System.out.println("Do you want to do it again? Y/N");
			answerString = input.next().toUpperCase();
		} while (answerString.equals("Y"));
	}
	private boolean operCheck(char op){
		
		switch (op) {
		case '+':
		case '/':
		case '*':
		case '-':
		         return true;
		default : 
		         return false;
		}
	}
	private double returnResult(String mynumber){
		return Double.parseDouble(mynumber.substring(1));
	}
	
	private void doCalculations(Double myDouble, char op) {
		switch (op) {
		case '+':  result += myDouble; break;
		case '*':  result *= myDouble; break;
		case '/':  result /= myDouble; break;
		case '-':  result -= myDouble; break;
		}
		
	}
}
