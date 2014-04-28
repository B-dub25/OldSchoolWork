package drawing2;

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.FlowLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JCheckBox;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
@SuppressWarnings("serial")
public class DrawingProgram2 extends JFrame implements ActionListener {

	DrawingPanel drawingPanel = new DrawingPanel();
	JCheckBox filled = new JCheckBox("filled");
	JRadioButton[] shapeButton;
    JRadioButton[] buttons ;
    
	DrawingProgram2() {
		super("My Drawing Program");

		String[] colors = { "red", "green", "blue" };
		String[] shapes1 = { "rectangle", "oval", "line", "scribble" };

		setSize(850, 400);
		setDefaultCloseOperation(EXIT_ON_CLOSE);

		layout(shapes1, colors);
		setVisible(true);
	}

	private void layout(String[] shapes, String[] colors) {

		// set defaults
		shapeButton = new JRadioButton[shapes.length];
		buttons = new JRadioButton[colors.length];
		drawingPanel.drawing.setColor(Color.red);
		drawingPanel.drawing.setDrawType(DrawType.rectangle);

		setLayout(new BorderLayout());
		add(drawingPanel, BorderLayout.CENTER);
		FlowLayout flow = new FlowLayout();
		JPanel panel = new JPanel(flow);
		panel.setLayout(new GridLayout(4, 1));
		
		JPanel shapePanel = new JPanel(flow);
		shapePanel.setLayout(new GridLayout(0, shapes.length+2));
		
		// shape buttons
        
		filled.addActionListener(this);
		for(int i = 0; i < shapes.length; ++i){
			shapeButton[i] = new JRadioButton(shapes[i]);
			shapeButton[i].addActionListener(this);
			shapePanel.add(shapeButton[i], i);
			}
		
		shapePanel.add(filled, 0);
		add(shapePanel, BorderLayout.NORTH);
		
		// color buttons
		for(int i = 0 ; i < colors.length; i++){
			buttons[i] = new JRadioButton(colors[i]);
			buttons[i].addActionListener(this);
			panel.add(buttons[i], i);
		}
		add(panel, BorderLayout.WEST);
	}
   
	public static void main(String[] args) {
		@SuppressWarnings("unused")
		DrawingProgram2 dp = new DrawingProgram2();

	}

	@Override
	public void actionPerformed(ActionEvent actionEvent) {

		String action = actionEvent.getActionCommand();
		System.out.println(action);

		switch (action) {
		case "red":
			drawingPanel.drawing.setColor(Color.RED);
			buttons[1].setSelected(false);buttons[2].setSelected(false);
			break;
		case "green":
			drawingPanel.drawing.setColor(Color.GREEN);
			buttons[0].setSelected(false);buttons[2].setSelected(false);
			break;
		case "blue":
			drawingPanel.drawing.setColor(Color.BLUE);
			buttons[0].setSelected(false);buttons[1].setSelected(false);
			break;
	   	case "oval":
			drawingPanel.drawing.setDrawType(DrawType.oval);
			shapeButton[0].setSelected(false);shapeButton[2].setSelected(false);
			shapeButton[3].setSelected(false);filled.setEnabled(true);
			break;
		case "rectangle":
			drawingPanel.drawing.setDrawType(DrawType.rectangle);
			shapeButton[1].setSelected(false);shapeButton[2].setSelected(false);
			shapeButton[3].setSelected(false); filled.setEnabled(true);
			break;
		case "line":
			drawingPanel.drawing.setDrawType(DrawType.line);
			shapeButton[0].setSelected(false);shapeButton[1].setSelected(false);
			shapeButton[3].setSelected(false);filled.setEnabled(false);
			break;
		case "scribble":
			drawingPanel.drawing.setDrawType(DrawType.scribble);
			shapeButton[0].setSelected(false);shapeButton[1].setSelected(false);
			shapeButton[2].setSelected(false); filled.setEnabled(false);; 
			break;
		}
		if(filled.isSelected())
			drawingPanel.drawing.setFilled(true);
		else {
			 drawingPanel.drawing.setFilled(false);
		 System.out.println("filled off");
		}
		
		
	}

}