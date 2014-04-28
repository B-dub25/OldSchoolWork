/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package bank;

/**
 *
 * @author brian
 */
public class CheckingAccount extends Account
{
    /**
     *
     * @param d
     */
    @Override
    public void debit(double d)
    {
        if(super.getBalance() >= fee) {
            super.debit(d+fee);
        }
        else{
            System.out.println("Balance exceeds the account balance");
        }
    }
    /*
     * @param c
     * 
     */
    @Override
    public void credit(double c)
    {
        super.credit((c - fee));
    }
    /**
     * constructor 
     */
    public CheckingAccount(double c)
    {
        super.credit(c);
        fee = 2.50;
    }
    public void print() 
            {
                System.out.println("Account type: Checking");
                System.out.printf("Account checking fee: %.2f %n",fee);
                System.out.printf("Account balance %.2f %n",this.getBalance());
            }
    private double fee;
}
