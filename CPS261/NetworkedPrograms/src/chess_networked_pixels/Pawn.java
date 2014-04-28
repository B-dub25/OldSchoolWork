package chess_networked_pixels;

import java.io.Serializable;

@SuppressWarnings("serial")
public class Pawn extends Piece implements ChessPieces, Serializable {

	Pawn(PieceType p, ColorType c, int xSquare, int ySquare) {
		super(p, c, xSquare, ySquare);
		setIndex(ySquare, xSquare);
		// TODO Auto-generated constructor stub
	}

	@Override
	public boolean checkMove(Piece[] p, int startingRow, int startingCol, int endRow, int endCol) {

		if(color == ColorType.white && endRow == startingRow - 1 && (endCol == startingCol+1 ||endCol == startingCol-1)){
			for (int i = 0; i < p.length; i++) 
				if(p[i].row == endRow && p[i].col == endCol && p[i].color != this.color)
				{
					removePiece(p[i]);
					decrement(p[i]);
					return true;
				}
		}      
		else if (color == ColorType.black && endRow == startingRow + 1 &&  (endCol == startingCol+1 ||endCol == startingCol-1)){
			System.err.println("here");
			for (int i = 0; i < p.length; i++) 
				if(p[i].row == endRow && p[i].col == endCol && p[i].color != this.color)
				{
					removePiece(p[i]);
					decrement(p[i]);
					return true;
				}
		}
		else if (color == ColorType.black) {
			return ((endRow == startingRow + 1 && endCol == startingCol)
					&& noOneThere(p, startingRow, startingCol, endRow, endCol));
		}
		return ((endRow == startingRow - 1 && endCol == startingCol)
				&& noOneThere(p, startingRow, startingCol, endRow, endCol));
	}
    
	public boolean noOneThere(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol) {
         
		for (int i = 0; i < p.length; i++) 
				if(p[i].row == endRow && p[i].col == endCol)
					return false;
		this.setIndex(endRow, endCol);
		return true;
	}
}