package drawing2;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import javax.swing.JPanel;

@SuppressWarnings("serial")
public class DrawingPanel extends JPanel {

	    Drawing drawing = new Drawing();
	    Image offScreenImage = null;
	    Dimension screenDimension = null;

	    // INNER Class
	    class MyMouseHandler extends MouseAdapter
	    {        
	        public void mousePressed(MouseEvent e)
	        {
	            drawing.mousePressed(e.getPoint());
	            repaint();
	        }
	        public void mouseReleased(MouseEvent e)
	        {
	            drawing.mouseReleased(e.getPoint());
	            repaint();
	        }
	        public void mouseDragged(MouseEvent e)
	        {
	            drawing.mouseDragged(e.getPoint());
	          repaint();
	        }
	    }

	    public DrawingPanel(){
	        
	        setSize(550, 350); 
	        MyMouseHandler mmh = new MyMouseHandler();
	        addMouseListener(mmh);
	        addMouseMotionListener(mmh);
	        setVisible(true);
	    }
	   
	   
	    public void paint(Graphics screen)
	    {
	    	
	    	Dimension dimen = getSize();
	     	
	        if (offScreenImage==null || !dimen.equals(screenDimension))
	        {
	            screenDimension = dimen;
	            offScreenImage = createImage(dimen.width, dimen.height);
	        }

	        Graphics g = offScreenImage.getGraphics();
	        g.setColor(Color.white);
	        g.fillRect(0, 0, dimen.width, dimen.height);
	        
	     	
	        
	        drawing.draw(g);
	        screen.drawImage(offScreenImage, 0,0,this);
	        
	    }
	    
	
}
