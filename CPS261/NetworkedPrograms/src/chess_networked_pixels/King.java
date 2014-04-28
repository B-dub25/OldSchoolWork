package chess_networked_pixels;

import java.io.Serializable;

public class King extends Piece implements ChessPieces, Serializable {

	King(PieceType p, ColorType c, int xSquare, int ySquare) {
		super(p, c, xSquare, ySquare);
		setIndex(ySquare, xSquare);
		// TODO Auto-generated constructor stub
	}

	@Override
	public boolean checkMove(Piece[] p, int startingRow, int startingCol, int endRow, int endCol) {
		System.err.println("KING");
		
		return(Math.abs(startingRow-endRow) == 1 || Math.abs(endCol-startingCol ) == 1) 
				&& noOneThere(p, startingRow, startingCol, endRow, endCol);
			
    	
	}
	
    public boolean noOneThere(Piece p[], int startingRow, int startingCol, int endRow, int endCol){
		
    	
		for (int i = 0; i < p.length; i++) {
			  if(p[i].row == endRow && p[i].col == endCol)
				  if(p[i].color == this.color && p[i] != this){
					  return false;
				  }
				  else {
					  removePiece(p[i]);
					  decrement(p[i]);
					return true;
				}
		}
			
		return true;
	}
    
}
