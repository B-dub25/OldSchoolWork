package drawing2;

import java.awt.*;
import java.awt.Color;
import java.awt.Graphics;

@SuppressWarnings("serial")
public class Oval extends Shape{

	boolean filled=false;
    Point start;
    Point lastPoint;
    
    public Oval(Color c, boolean filled)
    {
        super(c);
        lastPoint = start;
        this.filled = filled;
    }
    @Override
    void firstPoint(Point p) {
        start =p;
        lastPoint =p;
    }
    @Override
    void draw(Graphics g) {
        
    	g.setColor(color);
        int x = Math.min(start.x, lastPoint.x);
        int y = Math.min(start.y, lastPoint.y);
        int w = Math.abs(start.x - lastPoint.x);
        int h = Math.abs(start.y - lastPoint.y);
        
        if (filled)
            g.fillOval(x, y, w, h);
        else
            g.drawOval(x, y, w, h);
        
    }
    
	@Override
    void subsequentPoint(Point p) {
        lastPoint =p;
        
    }
}