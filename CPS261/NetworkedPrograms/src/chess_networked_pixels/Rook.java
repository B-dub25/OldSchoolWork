package chess_networked_pixels;

import java.io.Serializable;

@SuppressWarnings("serial")
public class Rook extends Piece implements ChessPieces, Serializable {

	Rook(PieceType p, ColorType c, int xSquare, int ySquare) {
		super(p, c, xSquare, ySquare);
		setIndex(ySquare, xSquare);
		// TODO Auto-generated constructor stub
	}

	@Override
	public boolean checkMove(Piece[] p,int startingRow, int startingCol, int endRow, int endCol) {

		if (col == startingCol && noOneThere(p, startingRow, startingCol, endRow, endCol))
			return true;
		else if (endRow == startingRow && noOneThere(p, startingRow, startingCol, endRow, endCol))
			return true;

		return false;
	}

	public boolean noOneThere(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol) {

		if (endCol == startingCol)
			return checkRowMove(p, startingRow, startingCol, endRow, endCol);
		return checkColumnMove(p, startingRow, startingCol, endRow, endCol);
	}

	boolean checkRowMove(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol) {

		if (startingRow > endRow) {
				for (int j = 0; j <= Math.abs(endRow - startingRow) ; j++)
					for (int i = 0; i < p.length; i++)
					if (p[i].row == (startingRow-j) && p[i].col== endCol && p[i] != this) {
						if (p[i].color != this.color) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else {
							return false;
						}
					}
		} else
			for (int i = 0; i < p.length; i++)
				for (int j = 0; j <= Math.abs(endRow - startingRow); j++)
					if (p[i].row == Math.abs(startingRow + j) && p[i].col == endCol
							&& p[i] != this) {
						if (p[i].color != this.color) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else {
							
							return false;
						}
					}
		return true;
	}

	boolean checkColumnMove(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol) {
		if (startingCol > endCol) {
			for (int j = 0; j <= Math.abs(endCol - startingCol); j++)
				for (int i = 0; i < p.length; i++) {
					if(p[i].areYouHere(startingCol-j, startingRow) && p[i] != this){
					   if(p[i].color != this.color){
						   removePiece(p[i]);
						   decrement(p[i]);
						  return true;
						}
						else
						return false;
					} 
					
				}
		} else
			for (int i = 0; i < p.length; i++)
				for (int j = 0; j <= Math.abs(endCol-startingCol); j++) {
					if ((p[i].col == (startingCol+j) && p[i].row == endRow)) {
						if (p[i].color != this.color) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else
							return false;
					}
				}

		return true;
	}
}
