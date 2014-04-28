/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package bank;


/**
 *
 * @author brian
 */

public class Bank
{
     /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
      SavingsAccount mysavings;
      mysavings = new SavingsAccount(6.6);
      mysavings.credit(300);
      mysavings.calculateInterest();
      mysavings.print();
      mysavings.debit(200);
      mysavings.print();
      mysavings.credit(1000);
      mysavings.print();
      mysavings.debit(1500);
      mysavings.setInterest(5.5);
      mysavings.print();
      int one = 4;
      double two = 3;
      System.out.println(one/two);
    }
}