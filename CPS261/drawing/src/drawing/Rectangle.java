package drawing;

import java.awt.*;

@SuppressWarnings("serial")
public class Rectangle extends Shape {

	boolean filled=false;
    Point start;
    Point lastPoint;
    Image offScreenImage = null;
    Dimension screenDimension = null;
    
   
    Rectangle(Color c, boolean filled)
    {
        super(c);
        setTitle("Rectangle");
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
            g.fillRect(x, y, w, h);
        else
            g.drawRect(x, y, w, h);
       
    }
    
	@Override
    void subsequentPoint(Point p) {
        lastPoint =p;
        
    }
    public String toString() {
		return "Rectangle";
	}
}
