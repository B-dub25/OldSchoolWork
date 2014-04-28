/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package firstmain;


public class Firstmain
{
         
   public static void main(String[] args)
   {
        MyStringMethods msm = new MyStringMethods();
        msm.readString();
        msm.printCounts("big", 'a');
        msm.setString("Parked in a van down by the river bank .... The van had was near a lot of other vans");
        msm.printCounts("van", 'a');
        MyStringMethods msm2 = new MyStringMethods();
        msm2.setString("the elephant in the room wouldn't budge");
        msm2.printCounts("the", 'i');
   }
}
