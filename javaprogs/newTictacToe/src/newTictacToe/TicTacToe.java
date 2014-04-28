package newTictacToe;

import java.util.Scanner;

public class TicTacToe {

    char[][] game = new char[3][3];
	int moveConter = 1;
	Scanner playerInput = new Scanner(System.in);

	public void displayGame() {
		int iconter = 1;
		for (int i = 0; i < 3; i++) {
			System.out.println("  ----------");
			//System.out.print((i + 1));
			for (int j = 0; j < 3; j++) {
				if (game[i][j] != ' ') {
				System.out.print(" |" + game[i][j]);
				iconter++;
				}
				else {
			       System.out.print(" |" + iconter);
			       iconter++;
				}
			}
			System.out.print(" |");
			System.out.println();
		}
		System.out.println("  ----------");
	}
	
	public boolean checkMove(int row, int col) {
		return (game[row][col] != 'X' && game[row][col] != 'O');
	}
	public boolean makeMove(int move,char player) {
		switch (move) {
		case 1: if(checkMove(0, 0)) game[0][0] = player; else return false;
		case 2: if(checkMove(1, 1)) game[1][1] = player; else return false;
		case 3: if(checkMove(0, 0)) game[0][0] = player; else return false;
		default:
			break;
		}
		return false;
	}
	public void newGame(){
		for (int i = 0; i < game.length; i++) {
			for (int j = 0; j < game[0].length; j++) {
				  game[i][j] = ' ';
			}
		}
		displayGame();
	}
}
