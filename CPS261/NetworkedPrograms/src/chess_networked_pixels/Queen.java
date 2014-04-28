package chess_networked_pixels;

import java.io.Serializable;

@SuppressWarnings("serial")
public class Queen extends Piece implements ChessPieces, Serializable {

	Queen(PieceType p, ColorType c, int xSquare, int ySquare) {
		super(p, c, xSquare, ySquare);
		setIndex(ySquare, xSquare);
		// TODO Auto-generated constructor stub
	}

	@Override
	public boolean checkMove(Piece[] p,int startingRow, int startingCol, int endRow, int endCol) {

		if ((endRow > startingRow || endRow < startingRow) && endCol == startingCol)
			return noOneThere(p, startingRow, startingCol, endRow, endCol);
		else if (endRow == startingRow && (endCol > startingCol || endCol < startingCol))
			return noOneThere(p, startingRow, startingCol, endRow, endCol);
		else if (endRow < startingRow && endCol < startingCol)
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

		if (startingRow == endRow || (endCol == startingCol))
			return checkColumnMove(p, startingRow, startingCol, endRow, endCol);
		return moveUp(p, startingRow, startingCol, endRow, endCol);

	}

	boolean moveUp(Piece p[], int startingRow, int startingCol, int endRow,
			int endCol) {

		if((startingCol < endCol && startingRow < endRow))
		  return moveDown(p, startingRow, startingCol, endRow, endCol);

		if (startingRow > endRow && startingCol < endCol) {
			for (int i = 0; i < p.length; i++)
				for (int r = 0; r <= Math.abs(startingRow - endRow); ++r)
					if (p[i].row == (startingRow - r)
							&& p[i].col == (startingCol + r) && p[i] != this) {
						if ((p[i].color != this.color) && p[i].row == endRow) {
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
							&& p[i].col == (startingCol - r) && p[i] != this) 
						if ((p[i].color != this.color) && p[i].row == endRow) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else
							return false;

					
		}
		return true;
	}

	boolean moveDown(Piece p[], int startingRow, int startingCol, int endRow,
			int endCol) {

		if (startingRow < endRow && endCol > startingCol) {
			for (int i = 0; i < p.length; i++)
				for (int r = 0; r <= Math.abs(startingRow - endRow); ++r)
					if (p[i].row == (startingRow + r)
							&& p[i].col == (startingCol + r) && p[i] != this) {
						if ((p[i].color != this.color) && p[i].row == endRow) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else
							return false;
					}

		} else
			for (int i = 0; i < p.length; i++)
				for (int r = 0; r <= Math.abs(startingRow - endRow); ++r)
					if (p[i].row == (startingRow + r)
							&& p[i].col == (startingCol - r) && p[i] != this) {
						if ((p[i].color != this.color) && p[i].row == endRow) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else
							return false;
					}

		return true;
	}

	boolean checkColumnMove(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol) {

		if (startingCol == endCol)
			return checkRowMove(p, startingRow, startingCol, endRow, endCol);

		else if (startingCol > endCol) {
			System.err.println("here");
			for (int i = 0; i < p.length; i++)
				for (int j = 0; j < Math.abs(endCol - startingCol); j++) {
					if ((p[i].col == (startingCol - j) && p[i].row == (startingRow))
							&& p[i] != this) {
						if (j == endRow && p[i].color != this.color) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else
							return false;

					}

				}
		} else
			for (int i = 0; i < p.length; i++)
				for (int j = 0; j < Math.abs(startingCol - endCol); j++) {
					if ((p[i].col == (endCol - j) && p[i].row == startingRow)
							&& p[i] != this) {
						if (p[i].color != this.color) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else {
							System.err.println(p[i].row + "\t" + p[i].col);
							return false;
						}
					}
				}

		return true;
	}

	boolean checkRowMove(Piece p[], int startingRow, int startingCol,
			int endRow, int endCol) {

		if (startingRow > endRow) {
			for (int i = 0; i < p.length; i++)
				for (int j = startingRow; j >= endRow; j--)
					if (p[i].row == j && p[i].col == endCol && p[i] != this) {
						if (j == endRow && p[i].color != this.color) {
							removePiece(p[i]);
							decrement(p[i]);
						} else
							return false;

					}
		} else
			for (int i = 0; i < p.length; i++)
				for (int j = startingRow; j <= endRow; j++)
					if (p[i].row == j && p[i].col == endCol && p[i] != this) {
						if (j == endRow && p[i].color != this.color) {
							removePiece(p[i]);
							decrement(p[i]);
							return true;
						} else
							return false;

					}
		return true;
	}
}
