package drawing;
import java.awt.Color;

enum DrawType {scribble, oval,  rectangle, polygon, line};
class DrawingProperties {
	DrawType drawType;
    boolean filled;
    Color color;
    DrawingProperties(DrawType drawType, Color color, boolean filled)
    {
        this.drawType = drawType;
        this.color = color;
        this.filled = filled;
    }
    public String toString()
    {
        return drawType + " color=" + color +" filled="+ filled;
    }
}

