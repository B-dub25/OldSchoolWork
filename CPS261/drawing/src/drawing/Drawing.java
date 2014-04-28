package drawing;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Point;
import java.util.ArrayList;


class Drawing {
	
	    DrawingProperties drawingProperties = new DrawingProperties(DrawType.rectangle, Color.blue, false);
	    ArrayList<Shape> shapeArr = new ArrayList<Shape>();
	    Shape inProgress = null;
	    
	    public String toString()
	    {
	        return drawingProperties.toString();
	    }
	    public void draw(Graphics g)
	    {
	    	 
	        for (int i=0; i < shapeArr.size(); i++)
	        {
	            Shape s = shapeArr.get(i);
	            s.draw(g);
	        }
	        if (inProgress != null)
	            inProgress.draw(g);
	    }
	    public void setColor(Color color)
	    {
	        drawingProperties.color = color;
	    }

	    public void setFilled(boolean filled)
	    {
	        drawingProperties.filled = filled;
	    }
	    public void setDrawType(DrawType drawType)
	    {
	        drawingProperties.drawType = drawType;
	    }

	    @SuppressWarnings("incomplete-switch")
		public void mousePressed(Point p)
	    {
	    	
	        switch(drawingProperties.drawType)
	        {
	        case rectangle:
	            inProgress = new Rectangle(drawingProperties.color, drawingProperties.filled);
	            break;
	        case oval:
	            inProgress = new Oval(drawingProperties.color, drawingProperties.filled);
	            break;
	        case line:
	            inProgress = new Line(drawingProperties.color);
	            break;
	        case scribble:
	            inProgress = new Scribble(drawingProperties.color);
	            break;
	        }
	        inProgress.firstPoint(p);
	    }

	    @SuppressWarnings("incomplete-switch")
		public void mouseDragged(Point p)
	    {
	        switch(drawingProperties.drawType)
	        {
	        case rectangle:
	        case oval:
	        case scribble:
	        case line:
	            inProgress.subsequentPoint(p);
	            break;
	        }
	    }
	    public void mouseReleased(Point p)
	    {
	        inProgress.subsequentPoint(p);
	        shapeArr.add(inProgress);
	        inProgress = null;
	    }

}
