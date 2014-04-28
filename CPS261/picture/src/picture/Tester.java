package picture;

import java.awt.BorderLayout;
import java.awt.Image;

import javax.swing.JFrame;

public class Tester extends JFrame {
	
	  int[] arr = new int[9];
	  Image[] images = new Image[9];
	  Tester(){
		  
	   super("Picture Matting game");
		screenLayOut(); 
	  }
  
	  private void screenLayOut(){
		  setSize(600, 600);
		  setLayout(new BorderLayout());
		  setVisible(true);
		  
	  }
	  private void readImages(){
		  
		
	  }
	  public static void main(String[] args) {
		Tester t = new Tester();
	}
}
