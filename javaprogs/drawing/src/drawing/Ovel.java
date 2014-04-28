package drawing;

import java.awt.Color;
import java.awt.Graphics;

import javax.swing.JFrame;
@SuppressWarnings("serial")
public class Ovel extends JFrame{

	public Ovel(String title) {
		super(title);
		setSize(1600, 900);
		setVisible(true);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	@Override
	public void paint(Graphics g) {
		int x  = 0, y = 0, w = 1600, h = 900;
		g.fillOval(x, y, w, h);
	   while(w >= 0 && h >= 0) {
		g.setColor(Color.RED);
		g.fillOval(x, y, w, h);
		x += 5; y += 5; w -= 10; h -= 10;	   
		g.setColor(Color.GREEN);
	    g.fillOval(x, y, w, h);
		x += 5; y += 5; w -= 10; h -= 10;
	   }
	}
			
		
	
}
