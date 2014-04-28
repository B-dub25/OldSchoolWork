/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package bank;

/**
 *
 * @author brian
 */
public class Account
{
    public void credit(double c)
    {
        if(c >= 0.0)
        {balance = c;}
        else
        {
            System.out.println("Deposit can not be a negative number ");
        }
    }
    public void debit(double d)
    {
        if(balance >= d)
        { balance -= d;
        }
        else
        {
            System.out.println("Debit amount exceeded account balance");
        }
    }
    public double getBalance()
    {
        return balance;
    }
    /**
     * constructor 
     * @param d will be a parameter
     */
    public Account()
    {
         balance = 0.0;
    }
    
    private double balance;
}