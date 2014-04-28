package drawing2;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Image;
import java.awt.Point;

@SuppressWarnings("serial")
public class Line extends Shape  {
	
	
    Point start;
    Point lastPoint;
    Image offScreenImage = null;
    Dimension screenDimension = null;
    
    public Line(Color c)
    {
        super(c);
        setTitle("Line");
        lastPoint = start;
        
    }
    @Override
    void firstPoint(Point p) {
        start =p;
        lastPoint =p;
    }
    @Override
    void draw(Graphics g) {
    	
        g.setColor(color);
        double x = start.getX();
        double y = start.getY();
        Point x2 = lastPoint.getLocation();
        Point y2 = lastPoint.getLocation();
        g.drawLine((int)x, (int)y, x2.x, y2.y);        
    }
        
	@Override
    void subsequentPoint(Point p) {
        lastPoint =p;
        
    }

}
