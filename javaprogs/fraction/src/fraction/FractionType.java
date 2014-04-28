/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package fraction;
/**
 *
 * @author brian
 */
import java.util.*;
public class FractionType
{
    private Scanner scan = new Scanner(System.in);
    private int num;
    private int denom;
    
    public FractionType()
    {
        num = 0;
        denom = 0;
    }
    /**
     * 
     * @param num sets the default num value.
     * @param denom sets the default denom value.
     * 
     */
    public FractionType(int numberator, int denom)
    {
        setValues(numberator, denom);
    }
    /**
     * 
     * @param otherFractionType copy constructor 
     */
    public FractionType(FractionType otherFractionType)
    {
        this.num = otherFractionType.num;
        this.denom = otherFractionType.denom;
    }
    /**
     * 
     * @param num sets the value of the num.
     * @param den sets the value of the denom.
     */
    public void setValues(int num, int den)
    {
        this.num = num;
        this.denom = den;
    }
    public boolean equals(FractionType otherFraction)
    {
            reduce(); otherFraction.reduce();
        if (num == otherFraction.num && denom == otherFraction.denom) {
            return true;
        }
        else {
            return false;
        }
    }
    /**
     * 
     * @return converts the integers values to a string type.  
     */
    public String toString()
    {
        if(Math.abs(num/denom) == 1)
        	return ("Whole number " + num/denom);
    	return (num + "/" + denom);
    }
    public FractionType add(FractionType or)
    {
        num = (num*or.denom + denom*or.num);
        denom = denom * or.denom;
        reduce();
        return new FractionType(num,denom);
    }
    public FractionType subtract(FractionType or)
    {
        num = (num*or.denom - denom*or.num);
        denom = denom * or.denom;
        reduce();
        return new FractionType(num,denom);
    }
    public FractionType multiply(FractionType op)
    {
        num = (this.num * op.num);
        denom = (this.denom * op.denom);
        reduce();
        return new FractionType(num, denom);
    }
    public FractionType divide(FractionType op)
    {
        num = (num * op.denom);
        denom = (denom * op.num);
        reduce();
        return new FractionType(num, denom);
    }
    public void readin(String label)
    {
        while (true) // Keep trying if bad input is received
        {
            System.out.println(label);
            String temp = scan.next();
            temp = temp.trim(); // get rid of white space at the beginning and end
            int index = temp.indexOf('/');
            if (index >= 0) {
                String numStr = temp.substring(0, index);
                String denomStr = temp.substring(index + 1);
                int n = Integer.parseInt(numStr);
                int d = Integer.parseInt(denomStr);
                setValues(n, d);
                return;
            }
            else {
                System.out.println("Input Fraction missing / ");
            }
        }//Keep trying until you get it right
    }
    private void reduce()
    {
        int counter = 2;
        int divisor = 2;
        while(Math.abs(num) > counter  || Math.abs(denom) > counter){
              if(num % counter == 0 && denom % counter == 0 )
                        divisor = counter; 
        counter++;
        }
        //System.out.print(divisor);
        while (Math.abs(num) % divisor == 0 && Math.abs(denom) % divisor == 0) {            
                 num /= divisor;
               denom /= divisor;       
        }
    }
}