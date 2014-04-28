package tictactoe;

public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		    Tictactoe game = new Tictactoe();
	        String str;
	        do
	        {
	            game.MakeMove();
	            System.out.println("Do you want to play Tic-Tac-Toe (y/n)?");
	            str= game.cin.next();
	        } while ("y".equals(str));
	        
	        System.out.println("Bye");
	        game.cin.close();
	    }    
	}
