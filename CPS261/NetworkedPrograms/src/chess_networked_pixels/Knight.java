package chess_networked_pixels;

import java.io.Serializable;
@SuppressWarnings("serial")
public class Knight extends Piece implements ChessPieces , Serializable{

	Knight(PieceType p, ColorType c, int xSquare, int ySquare) {
		super(p, c, xSquare, ySquare);
		setIndex(ySquare, xSquare);
		// TODO Auto-generated constructor stub
	}

	@Override
	public boolean checkMove(Piece p[], int startingRow, int startingCol, int endRow, int endCol) {
	    	
	    	if(Math.abs(endRow  - startingRow) == 2)
	    		return ((endCol - 1 == startingCol || endCol + 1 == startingCol) && 
	    				noOneThere(p, startingRow, startingCol, endRow, endCol));
	    	else if(Math.abs(endCol - startingCol) == 2){
	    		
	    		return (endRow - 1 == startingRow || endRow + 1 == startingRow && 
	    				noOneThere(p, startingRow, startingCol, endRow, endCol));
	    	}
	    return false;
	}
    public boolean noOneThere(Piece p[], int startingRow, int startingCol, int endRow, int endCol){
		
    	for (int i = 0; i < p.length; i++) {
			 if(p[i].row == endRow && p[i].col == endCol)
				  if(this.color == p[i].color)
					  return false;
			      else {
			    	  removePiece(p[i]);
			    	  decrement(p[i]);
					   return true;
				   }
		}
		return true;
	}

}
