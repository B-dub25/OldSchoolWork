/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package romancalulator;

/**
 *
 * @author brian
 */
import java.util.*;
public class Romancalulator
{    
    Scanner scan = new Scanner(System.in);
    boolean doCalculation()
    {
        char operand; int operator1 = 0, operator2 = 0;
        operand = getOperator();
        if(operand == 'q'){
            return false;
        }
        operator1 = getOperand(1);
        operator2 = getOperand(2);
        int sum = doArithmetic(operator1, operator2, operand);
        System.out.println(convert_to_Roman(sum));
        return true;
    }
    char getOperator()
    {
        char operator; String option;
        System.out.println("Please enter a operator + - * / (q)=quit ");
        option = scan.next();
        operator = option.charAt(0);
        switch(operator){
            case '+': return operator;
            case '*': return operator;
            case '/': return operator;
            case '-': return operator;
            case 'q': return operator;
            default: getOperator(); break;
        }
        return operator;
    }
    int getOperand(int which)
    {
        String oper = "";
        if (which == 1) {
            System.out.println("Enter operant 1");
        }
        else {
           System.out.println("Enter operant 2"); 
        }
        oper = scan.next();
        oper = oper.toUpperCase();
        if(convert_from_Roman(oper) == -1)
        {getOperand(which);}
        return  convert_from_Roman(oper);    
    }
    String convert_to_Roman(int value)
    {
        String newRoman = "";
        for (int i = 0; i < value/1000; i++) {
              newRoman += "M";
        }value = value % 1000;
        for (int i = 0; i < value/500; i++) {
                 newRoman += "D";
            }value %= 500;
        for (int i = 0; i < value/100; i++) {
            newRoman += "C";
        }value %= 100;
        for (int i = 0; i < value/50; i++) {
                 newRoman += "L";          
        } value %= 50;
        for (int i = 0; i < value/10; i++) {
             newRoman += "X";
        }
        value %= 10;
        for (int i = 0; i < value/5; i++) {
              newRoman += "V";
        } value %= 5;
        for (int i = 0; i < value; i++) {
              newRoman += "I";
        }
        return newRoman;
    }    
    int convert_from_Roman(String value)
    {
        int counter = 0; int num = 0;
        while(counter < value.length()){
            switch(value.charAt(counter)){
                case 'M': num += 1000; break;
                case 'D': num += 500; break;
                case 'C': num += 100; break;
                case 'L': num += 50; break;
                case 'X': num += 10; break;
                case 'V': num += 5; break;
                case 'I': num += 1; break;
                default:
                        return -1;
            }
           counter++; } // end of while loop
     return num;
    }    
    int doArithmetic(int operand1, int operand2, char operator)
    {
        switch(operator){
            case '+': return (operand1 + operand2);
            case '/': return (operand1 / operand2);
            case '-': return (operand1 - operand2);
            case '*': return (operand1 * operand2);
        }
         return 0;
    }
}