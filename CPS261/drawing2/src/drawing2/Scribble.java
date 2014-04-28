package drawing2;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Point;
import java.util.ArrayList;
@SuppressWarnings("serial")
public class Scribble extends Shape {

	 ArrayList<Point> points= new ArrayList<Point>();
	   
	 Scribble(Color c)
	    {
	        super(c);
	    }
	    @Override
	    void firstPoint(Point p) {
	        points.add(p);
	        
	    }
	    @Override
	    void draw(Graphics g) {
	        g.setColor(color);
	        for (int i=1; i < points.size(); i++)
	        {            
	            Point first = points.get(i-1);
	            Point next = points.get(i);
	            g.drawLine(first.x, first.y, next.x, next.y);
	        }
	        
	    }
	    @Override
	    void subsequentPoint(Point p) {
	        points.add(p);
	        
	    }

}
