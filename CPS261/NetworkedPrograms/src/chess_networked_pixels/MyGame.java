package chess_networked_pixels;



import java.awt.Graphics;
import java.io.Serializable;

import gameNet.*;


@SuppressWarnings("serial")
public class MyGame extends GameNet_CoreGame implements Serializable{
	
	Piece[] pieces = new Piece[32];
	ColorType player = ColorType.white; 
	
	int selectedIndex = -1;
    int startingRow = 0, startingCol = 0; 
	int x_pressed_pixel=0;
	int y_pressed_pixel=0;

	int x_dragged_pixel=0;
	int y_dragged_pixel=0;

	public Object process(Object ob)
	{
		MyGameInput inp= (MyGameInput)ob;
		switch(inp.cmd)
		{
		case MyGameInput.MOUSE_PRESSED:
			mousePressed(inp.x, inp.y, inp.boardDimensions);
			break;
		case MyGameInput.MOUSE_RELEASED:
			mouseReleased(inp.x, inp.y, inp.boardDimensions);
			break;
		case MyGameInput.MOUSE_DRAGGED:
			mouseDragged(inp.x, inp.y);
			break;
		case MyGameInput.CONNECTING:
			break;
		}

		return new MyGameOutput(this);
	}



	int calc_xSelectLoc(int x, int xstart, int square_width)
	{
		int xret =  (x - xstart)/square_width;
		if (xret >= 0 && xret < 8)
			return xret;
		else 
			return -1;
	}
	
	int calc_ySelectLoc(int y, int ystart, int square_height)
	{
		int yret =  (y - ystart)/square_height;
		if (yret >= 0 && yret < 8)
			return yret;
		else 
			return -1;
	}

	void mousePressed(int x, int y, BoardDimensions b)
	{
		x_pressed_pixel = x_dragged_pixel = x;
		y_pressed_pixel = y_dragged_pixel = y;

		int xSelectLoc = calc_xSelectLoc(x, b.xstart, b.square_width);
		int ySelectLoc = calc_ySelectLoc(y, b.ystart, b.square_height);
		startingCol = xSelectLoc; startingRow = ySelectLoc;
		
		if (xSelectLoc >= 0 && ySelectLoc >= 0) 
		{
			for (int i=0; i < pieces.length; i++)
			{
				if (pieces[i].areYouHere(xSelectLoc, ySelectLoc))
				{			
					
					selectedIndex = i;
					break;
				}
			}
		}
	}
	
	void mouseDragged(int x, int y)
	{
		x_dragged_pixel = x;
		y_dragged_pixel = y;
	}
	
	void mouseReleased(int x, int y, BoardDimensions b)
	{
		if (selectedIndex >= 0)
		{
			int xSelectLoc = calc_xSelectLoc(x, b.xstart, b.square_width);
			int ySelectLoc = calc_ySelectLoc(y, b.ystart, b.square_height);
			
			if (moveAndColorValidation(pieces, xSelectLoc, ySelectLoc)) 
			{
			  pieces[selectedIndex].moveLoc(xSelectLoc, ySelectLoc);
			  pieces[selectedIndex].setIndex(ySelectLoc, xSelectLoc); // store in order row / column 
			  switchPlayer();
			  if(winnerCheck())
				  initailize();
			}
			
			selectedIndex = -1;
		}
	}
	
	void switchPlayer(){
		if(player == ColorType.white)
			  player = ColorType.black;
		  else
			  player = ColorType.white;
	}
	boolean moveAndColorValidation(Piece p[], int xSelectLoc, int ySelectLoc){
		return (xSelectLoc >= 0 && ySelectLoc >= 0 && 
				player == pieces[selectedIndex].color && 
				pieces[selectedIndex].checkMove(pieces,startingRow,startingCol,ySelectLoc, xSelectLoc));
	}
	boolean winnerCheck(){
		return (Piece.blackPieces == 0 || Piece.whitePieces == 0);
	}
	MyGame()
	{
		
		initailize();// Fill in all the pieces and their locations   
		

	}

	void initailize(){
		
		int index=0;
        
		player = ColorType.white; 
        Piece.blackPieces = 16;
        Piece.whitePieces = 16;
        
		for (int i=0; i < 8; i++) // black pawns in row 1
		{
			pieces[index] = new Pawn(PieceType.Pawn, ColorType.black, i, 1);
			pieces[index].setIndex(1, i);
			index++;
		}
		for (int i=0; i < 8; i++) // white pawns in row 6
		{
			pieces[index] = new Pawn(PieceType.Pawn, ColorType.white, i, 6);
			pieces[index].setIndex(6, i);
			
			index++;
		}

		PieceType[] startingKingRow={PieceType.Rook, PieceType.Knight, PieceType.Bishop, 
				PieceType.Queen, PieceType.King, 
				PieceType.Bishop,PieceType.Knight,PieceType.Rook};

		
		
		
		for (int i=0; i < 8; i++) // black king row in row 0
		{
			if(i == 0 || i == 7)
				pieces[index++] = new Rook(startingKingRow[i], ColorType.black, i, 0);
			else if(i == 2 || i == 5)
				pieces[index++] = new Bishop(startingKingRow[i], ColorType.black, i, 0);
			else if(i == 1 || i == 6)
				pieces[index++] = new Knight(startingKingRow[i], ColorType.black, i, 0);
			else{
				pieces[index++] = new Queen(startingKingRow[i], ColorType.black, i, 0);
				i++;
				pieces[index++] = new King(startingKingRow[i], ColorType.black, i, 0);
			}
			
		}
		for (int i=0; i < 8; i++) // white king row in row 7
		{
			if(i == 0 || i == 7)
				pieces[index++] = new Rook(startingKingRow[i], ColorType.white, i, 7);
			else if(i == 2 || i == 5)
				pieces[index++] = new Bishop(startingKingRow[i], ColorType.white, i, 7);
			else if(i == 1 || i == 6)
				pieces[index++] = new Knight(startingKingRow[i], ColorType.white, i, 7);
			else{
				pieces[index++] = new Queen(startingKingRow[i], ColorType.white, i, 7);
				i++;
				pieces[index++] = new King(startingKingRow[i], ColorType.white, i, 7);
			}
	   }
	}
	
	void drawInPosition(Graphics g, BoardDimensions b)
	{
		for (int i=0; i < pieces.length; i++)
		{
			if (i != selectedIndex)
				pieces[i].drawInPosition(g, b);
			else
				pieces[i].dragDraw(g, b,
						x_dragged_pixel - x_pressed_pixel,
						y_dragged_pixel - y_pressed_pixel);
		}
	}

}