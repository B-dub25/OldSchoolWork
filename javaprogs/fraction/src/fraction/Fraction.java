/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package fraction;

/**
 *
 * @author brian
 */
import java.util.Scanner;
public class Fraction
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args)
    {
        FractionType f1 = new FractionType();
        FractionType f2 = new FractionType();
        FractionType f3 = null;
        Scanner scan = new Scanner(System.in);

        while (true) {
            System.out.println("Enter operation: + - * / q (q ==> quit) : ");
            String input = scan.next();
            if (input.charAt(0) == 'q') {
                return; // All done
            }
            f1.readin("Enter Fraction 1: ");
            f2.readin("Enter Fraction 2: ");
            System.out.println("f1 = " + f1);
            System.out.println("f2 = " + f2);

            if (f1.equals(f2)) {
                System.out.println("f1 and f2 are equal");
            }
            else {
                System.out.println("f1 and f2 are not equal");
            }

            switch (input.charAt(0)) {
                case '+':
                    f3 = f1.add(f2);
                    System.out.println("f1+f2=" + f3);
                    break;

                case '-':
                    f3 = f1.subtract(f2);
                    System.out.println("f1-f2=" + f3);
                    break;

                case '*':
                    f3 = f1.multiply(f2);
                    System.out.println("f1*f2=" + f3);
                    break;

                case '/':
                    f3 = f1.divide(f2);
                    System.out.println("f1/f2=" + f3);
                    break;

                default:
                    System.out.println("Illegal command: " + input);
                    break;

            }
        }// end of while loop

    }
}
