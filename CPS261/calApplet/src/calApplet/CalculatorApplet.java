package calApplet;

import java.applet.Applet;
@SuppressWarnings("serial")
public class CalculatorApplet extends Applet {
	
	public void init() { 
        
		setSize(600,250);
        Calculator c = new Calculator();
        add(c);
        setVisible(true);
		
    }
	
	public static void main(String[] args) {
		
		CalculatorApplet applet = new CalculatorApplet();
		applet.init();
		
	}
}
