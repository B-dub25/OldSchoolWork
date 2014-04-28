package tictactoe;

import java.util.Scanner;

public class Tictactoe {

	private char[][] game;
	private int player = 1;
	private int row, col;
	public Scanner cin = new Scanner(System.in);

	public Tictactoe() {
		game = new char[3][3];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				game[i][j] = ' ';
			}
		}
		row = 0;
		col = 0;
	}

	public void MakeMove() {

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				game[i][j] = ' ';
			}
		}
		player = 1;
		boolean continueFlag = true;
		while (continueFlag) {
			char move = 'X';

			if (player % 2 == 0) {
				move = 'O';
			}
			display();
			System.out.println("Player " + move
					+ " please enter a row and column");
			row = cin.nextInt();
			col = cin.nextInt();
			if (checkMove()) {
				row -= 1; col -= 1;
				game[row][col] = move;
				increment();
				if (checkWinner(row, col)) {
					System.out.println("Player " + move + " is the winner!!! ");
					continueFlag = false;
					display();
				} else if (player > 9) {
					System.out.println("Game ends in a draw");
					continueFlag = false;
					display();
				}
			} else
				System.out.println("Invalid move " + row + " " + col);
		}
	}

	private boolean checkMove() {

		if (row > 3 || col > 3) {
			return false;
		}
		return (game[row-1][col-1] == ' ');
	}

	public boolean checkWinner(int rownumber, int column) {
		return (checkAngle() || checkColumns(rownumber) || checkRows(column));
	}

	private boolean checkRows(int col) {
		return (game[0][col] == game[1][col] && game[2][col] == game[0][col] && game[0][col] != ' ');
	}

	private boolean checkColumns(int row) {
		return (game[row][0] == game[row][1] && game[row][2] == game[row][0] && game[row][2] != ' ');
	}

	private boolean checkAngle() {
		return (game[0][0] == game[1][1] && game[2][2] == game[0][0]
				&& game[0][0] != ' ' || game[0][2] == game[1][1]
				&& game[2][0] == game[0][2] && game[0][2] != ' ');
	}

	public int increment() {
		return player++;
	}

	public void display() {

		System.out.print(("  1   2   3"));
		System.out.println();
		for (int i = 0; i < 3; i++) {
			System.out.println("  ----------");
			System.out.print((i + 1));

			for (int j = 0; j < 3; j++) {
				System.out.print(" |" + game[i][j]);

			}
			System.out.print(" |");
			System.out.println();
		}
		System.out.println("  ----------");
	}
}
