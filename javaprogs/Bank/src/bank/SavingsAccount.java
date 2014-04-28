/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package bank;

/**
 *
 * @author brian
 */
public class SavingsAccount extends Account
{

    SavingsAccount()
    {
        throw new UnsupportedOperationException("Not yet implemented");
    }
    public double calculateInterest()
   {
       return getBalance()*(interest/100);
   }
   /*
    * @param c
    */
   @Override
   public void credit(double c)
   {
       super.credit(c+calculateInterest());
   }
   public void setInterest(double R)
   {
       interest = R;
   }

    public SavingsAccount(double interest)
    {
        this.interest = interest;
    }
   
   void print()
   {
       System.out.println("Account type: Savings");
       System.out.printf("Account interest rate: %.1f %n", + interest);
       System.out.printf("Account Balance: %.2f %n",getBalance());
       System.out.printf("Account interest earned: %.2f %n", calculateInterest());
   }
   private double interest;
}
