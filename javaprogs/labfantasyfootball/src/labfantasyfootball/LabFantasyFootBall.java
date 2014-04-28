package labfantasyfootball;

public class LabFantasyFootBall {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		FantasyFootBall game = new FantasyFootBall();
		game.display();
		FantasyFootBall game2 = new FantasyFootBall(game);
		System.out.println();
		game2.display();
		

	}
    
}
