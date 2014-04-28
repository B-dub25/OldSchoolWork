/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package statictest;
/**
 *
 * @author brian
 */
public class myclass
{
    private double two = 0;
    private static int three = 0;
    private  static int one = 0;
    
    /**
     *@
     */
    public void test()
    {
        add();
        one++;
        two++;
    }/**
     * 
     * @return this will return the value of the static type.
     */
    public static int add()
    {
        return one++;
    }
    private static void name()
    {
        myclass m = new myclass();
        m.two++;
        three++;
        one+=three+m.two;
    }
    /**
     *@param i 
     * this  will add one to the object of StaticTest type. 
     */
    public int addone(int i)
    {
        two = i;
        return (int) two;
    }
    /**
     * 
     * @return this will return the value of the instance variable. 
     */
    public int returnit()
    {
        return (int)two;
    }
}