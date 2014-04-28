/* This is for lab Datemothods
 * 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package datemethod;

/**
 *
 * @author brian
 */
public class Datemethod
{
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
        Date d = new Date(4,13,2010);
        d.addDays(10);
        System.out.println(d);

        Date d1 = new Date(4,13,2010);
        d1.addDays(21);
        System.out.println(d1);
        

        Date d2 = new Date(2,13,2010);
        d2.addDays(65);
        System.out.println(d2);


        Date d3 = new Date(2,13,2008);
        d3.addDays(65);
        System.out.println(d3);

        Date d4 = new Date(2,13,2000);
        d4.addDays(65);
        System.out.println(d4);


        Date d5 = new Date(2,13,1900);
        d5.addDays(65);
        System.out.println(d5);
        
        Date d6 = new Date(2,13,1900);
        d6.addDays(420);
        System.out.println(d6);       
    }
}