/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package datemethod;

/**
 *
 * @author brian
 */
public class Date
{
    private int month;
    private int day;
    private int year; //a four digit number.

    public Date()
    {
        month = 1;
        day = 1;
        year = 2010;
    }
    public Date(int month, int day, int year)
    {
        this.month = month;
        this.day = day;
        this.year = year;
    }

    public String toString()
    {
        return (month + "/" + day + "/" + year);
    }

    private boolean isLeapYear()
    {
        if (year % 100 == 0){
            if (year % 400 == 0) {
                return true;
            }
            
        }  
        else if(year % 4 == 0){
              return true;  
        }
       
            return false;
        // *********** Fill in details --- 
        // If the year is not evenly divisible by 100, then a leap year 
        // occurs when the year is evenly divisible by 4
        // If the year is evenly divisible by 100 then it is not a leap year
        // unless the year is also divisible by 400.
    }

    private int daysInMonth()
    {
        switch(month)
        {
            case 4:
            case 6:
            case 9:
            case 11: return 30;
            case 2:  return (isLeapYear())? 29:28;
            default: return 31;
        }
        // *********** Fill in details --- 
        // April(4), June(6), September(9), and November(11) have 30 days
        // All other days other than February have 31 days
        // For leap years, February has 29 days otherwise 28 days
    }

    public void addDays(int daysToAdd)
    { 
     for(int d = 0; d < daysToAdd; ++d)
     {
        day++;
        if(day > daysInMonth()){
            day = day - daysInMonth();
            month++;
            if (month > 12) {
             year++; 
             month = 1;
            }
        }    
     }   //end of for loop
        // *********** Fill in details --- 
        // add daysToAdd and update day, month and year accordingly
    }
}
