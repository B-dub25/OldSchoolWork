package chess_networked_pixels;

import java.awt.Graphics;
import java.io.Serializable;

enum ColorType {black, white};
enum PieceType {Pawn, Rook, Knight, Bishop, Queen, King};



@SuppressWarnings("serial")
abstract class Piece  implements Serializable
{    
    int xSquare, ySquare;
    PieceType pieceType;  
    ColorType color;
    int row, col;
    static int whitePieces = 16;
    static int blackPieces = 16;
    Piece (PieceType p, ColorType c, int xSquare, int ySquare)
    {
        this.pieceType=p;
        this.color =c;
        this.xSquare = xSquare;
        this.ySquare = ySquare;
       
        
    }
    void setIndex(int r, int c){
    	row = r;
    	col = c;
    }
    void moveLoc(int x, int y)
    {
        
    	xSquare = x;
        ySquare = y;
       
    }
    
    boolean areYouHere(int xSelectLoc, int ySelectLoc)
    {
        
    	
    	if (xSelectLoc == xSquare && ySelectLoc == ySquare)
            return true;
        else
            return false;
    }
    
     void drawInPosition(Graphics g, BoardDimensions b)
     {
         
    	 dragDraw(g, b, 0,0);
     }
     // The following will be used while we are dragging piece around
	void dragDraw(Graphics g, BoardDimensions b,
             int xDelta, int yDelta)
     {
		 
         ChessPiece chessPiece = ChessPiece.chessPieces[color.ordinal()][pieceType.ordinal()];
         int x = b.xstart+xSquare*b.square_width + xDelta;
         int y = b.ystart+ySquare*b.square_height+yDelta;
         chessPiece.draw(g,x,y,b.square_width,b.square_height);
     }
	
	void removePiece(Piece p){
		p.moveLoc(-1, -1);
		p.setIndex(-1, -1);
		
		
	}
	void decrement(Piece p){
		if(p.color == ColorType.white)
			Piece.whitePieces--;
		else
			Piece.blackPieces--;
	}
	abstract boolean checkMove(Piece p[], int startingRow, int startingCol, int row, int col);
	
}
