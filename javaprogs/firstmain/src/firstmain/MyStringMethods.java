/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package firstmain;

/**
 *
 * @author brian
 */
import java.util.Scanner;
public class MyStringMethods
{
    private String myStr="";
    
    public void readString()
    {
        Scanner cin = new Scanner(System.in);
        System.out.println("Enter a string please ");
        myStr = cin.nextLine();
    }
    public void setString(String s)
    {
        myStr =s;
    }
    public int countOccurrences(String s)
    {
     int tracker = 0; int counter = 0;
     counter = myStr.indexOf(s);
     while(counter < myStr.length())
     {
         if(myStr.indexOf(s,counter) >= 0)
         {
             tracker++;
         }
         counter += myStr.indexOf(s, counter)+s.length();
     }
      return  tracker;
    }
    public int countOccurrences(char c)
    {
        int tracker = 0;
        for (int i = 0; i < myStr.length(); i++) {
            if(myStr.charAt(i) == c)
            {
                tracker++;
            }
        }
        // use indexOf and return the number of occurrences of the character "c"
      return tracker;
    }
    int countUpperCaseLetters()
    {
       int tracker = 0;
        for (int i = 0; i < myStr.length(); i++) {
            int mypoint = (char)myStr.charAt(i);
             if(mypoint >= 65 && mypoint <= 90)
             {
                 tracker++;
             }
        }
      return tracker;
    }
    int countLowerCaseLetters()
    {
        int tracker = 0;
        for (int i = 0; i < myStr.length(); i++) {
            for (char j = 'a'; j <= 'z'; j++) {
                if(myStr.charAt(i) == j)
                {
                   tracker++;
                }
            }
        }
        return tracker;
    }
    public void printCounts(String s, char c)
    {
        System.out.println("***************************************");
        System.out.println("Analyzing: myStr="+myStr);
        System.out.println("Number of "+s + " is "+ countOccurrences(s));
        System.out.println("Number of "+c + " is "+ countOccurrences(c));
        System.out.println("Number of Upper case letters="+ countUpperCaseLetters());
        System.out.println("Number of Lower case letters="+ countLowerCaseLetters());
    }
    
}
