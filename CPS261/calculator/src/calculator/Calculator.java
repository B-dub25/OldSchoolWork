package calculator;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.*;

import javax.swing.*;

@SuppressWarnings("serial")
public class Calculator extends JFrame implements ActionListener{

	private String[]  iconStrings ={"0","1","2","3","4","5","6","7","8","9","+","-","*","/","=","clear"};
	private JButton[] buttons = new JButton[iconStrings.length];
	private JPanel panels = new JPanel(new FlowLayout());
	private JPanel buttonPanel = new JPanel(new FlowLayout());
	private Font font = new Font("SERIF", Font.BOLD, 32);
	private JTextArea boxArea = new JTextArea(1,10);
	private char op =' ' ;

	public Calculator() {
		
		super("Calculator");
		setSize(600, 400);
		GridLayout gridLayout = new GridLayout(4, 5,4,4);
		setLayout(gridLayout);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		
		layout( buttons, iconStrings);
		setVisible(true);
		
	}
	
	
	private void layout(JButton[] buttons, String[] icons){
		
		
		Dimension dimension = new Dimension(getWidth(), 30);
		Dimension buttDimension = new Dimension(40, 40);
		setFont(font);
		setLayout(new BorderLayout());
		
		buttonPanel.setLayout(new GridLayout(4,4,4,4));
		boxArea.setFont(font);
		boxArea.setPreferredSize(dimension);
		boxArea.setEditable(false);
		boxArea.setComponentOrientation(ComponentOrientation.LEFT_TO_RIGHT);
	    boxArea.setBackground(Color.YELLOW);
	    boxArea.setVisible(true);
	    panels.add(boxArea);
	    
		
		for (int i = 0; i < icons.length; i++) {
			 buttons[i] = new JButton(icons[i]);
			 if(i > 9)
				 buttons[i].setBackground(Color.RED);
			 else
				 buttons[i].setBackground(Color.CYAN);
			
			 buttons[i].setPreferredSize(buttDimension);	
			 buttons[i].setForeground(Color.BLACK);
			 buttons[i].setFont(font);
	         buttons[i].addActionListener(this);
		}
		for(int i = 0; i< icons.length; ++i)
		buttonPanel.add(buttons[i],i);
		
		add(panels, BorderLayout.NORTH);
		add(buttonPanel);
		
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		
		String string = e.getActionCommand();
		
		switch (string) {
		case "0": boxArea.append(string);break;
		case "1": boxArea.append(string);break;
		case "2": boxArea.append(string);break;
		case "3": boxArea.append(string);break;
		case "4": boxArea.append(string);break;
		case "5": boxArea.append(string);break;
		case "6": boxArea.append(string);break;
		case "7": boxArea.append(string);break;
		case "8": boxArea.append(string);break;
		case "9": boxArea.append(string);break;
		case "+": op = '+'; boxArea.append(string) ;break;
		case "-": op = '-'; boxArea.append(string);break;
		case "*": op = '*';boxArea.append(string) ;break;
		case "/": op = '/';boxArea.append(string);break;
		case "=": calculate(op); ;break;
		case "clear": clear();;
		default:
			break;
		}
	}
	private void clear() {
		boxArea.setText("");
	}
	private void calculate(char op){
		
		String expression = boxArea.getText(); 
		if(expression.length() >= 3){
			try{
				int operant1 = 0, operant2 = 0;
			operant1 = Integer.valueOf(expression.substring(0, expression.indexOf(op)));
			operant2 = Integer.valueOf(expression.substring(expression.indexOf(op)+1));
			
			switch (op) {
			case '+': clear(); boxArea.setText(String.valueOf(operant1+operant2)); break;
			case '-': clear(); boxArea.setText(String.valueOf(operant1-operant2)); break;
			case '*': clear(); boxArea.setText(String.valueOf(operant1*operant2)); break;
			case '/': clear(); boxArea.setText(String.valueOf(operant1/operant2)); break;
			}
			
			}catch (NumberFormatException e) {
				
			}
		}
	}
	@SuppressWarnings("unused")
	public static void main(String[] args) {
		Calculator c = new Calculator();
	}
	
	
}
