package chess_networked_pixels;

import java.io.Serializable;

@SuppressWarnings("serial")
public class Bishop extends Piece implements ChessPieces, Serializable {

	Bishop(PieceType p, ColorType c, int xSquare, int ySquare) {
		super(p, c, xSquare, ySquare);
		setIndex(ySquare, xSquare);
	}

	public boolean checkMove(Piece p[], int startingRow, int startingCol, int endRow, int endCol) {

		if (endRow < startingRow && endCol < startingCol)
			return noOneThere(p, startingRow, startingCol, endRow, endCol);
		else if (endRow > startingRow && endCol > startingCol)
			return noOneThere(p, startingRow, startingCol, endRow, endCol);
		else if (endRow > startingRow && endCol < startingCol)
			return noOneThere(p, startingRow, startingCol, endRow, endCol);
		else if (endRow < startingRow && endCol > startingCol)
			return noOneThere(p, startingRow, startingCol, endRow, endCol);

		return false;

	}

	public boolean noOneThere(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol) {

		if (startingCol < endCol)
			return rightMove(p, startingRow, startingCol, endRow, endCol);
		return leftMove(p, startingRow, startingCol, endRow, endCol);

	}

	public boolean rightMove(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol) {

		if (startingRow < endRow) {
			
			for (int i = 0; i < p.length; i++)
				for (int r = 0; r <= Math.abs(startingRow - endRow); ++r)
						if (p[i].row == (startingRow + r)
								&& p[i].col == (startingCol + r)
								&& p[i] != this) {
							if (p[i].color != this.color) {
								removePiece(p[i]);
								decrement(p[i]);
								return true;
							} else
								return false;
						}
		} else {
			for (int i = 0; i < p.length; i++)
				for (int r = 0; r <= Math.abs(startingRow - endRow); ++r)
					if (p[i].row == (startingRow - r)
							&& p[i].col == (startingCol + r) && p[i] != this) {
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
	
  public boolean leftMove(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol){
	  
	  if (startingRow < endRow) {
			for (int i = 0; i < p.length; i++)
				for (int r = 0; r <= Math.abs(startingRow - endRow); ++r)
						if (p[i].row == (startingRow + r)
								&& p[i].col == (startingCol - r)
								&& p[i] != this) {
							if (p[i].color != this.color && p[i] != this) {
								removePiece(p[i]);
								decrement(p[i]);
								return true;
							} else
								return false;
						}
		} else {
			for (int i = 0; i < p.length; i++)
				for (int r = 0; r <= Math.abs(startingRow - endRow); ++r)
					if (p[i].row == (startingRow - r)
							&& p[i].col == (startingCol - r) && p[i] != this) {
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