package drawing;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Point;


import javax.swing.JFrame;
@SuppressWarnings("serial")
abstract class Shape extends JFrame{

    Color color;
    Shape ( Color c)
    {
        color =c;
    }
    abstract void firstPoint(Point p);
    abstract void draw(Graphics g);
    abstract void subsequentPoint(Point p);
}
