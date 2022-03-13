
import java.util.Scanner;
public class DateTest {

/**
* @param args the command line arguments
*/
public static void main(String[] args) {
// TODO code application logic here
Scanner input = new Scanner(System.in);
Date1 date = new Date1(7, 4, 2004);

System.out.println("The initial date is: ");
date.displayDate();

date.setMonth(11);
date.setDay(1);
date.setYear(2003);

System.out.println("\nDate with new values is: ");
date.displayDate();

int d, m, y;
System.out.println("Enter the day\n");
d = input.nextInt();
System.out.println("Enter the month\n");
m = input.nextInt();
System.out.println("Enter the year\n");
y = input.nextInt();

date.setMonth(m);
date.setDay(d);
date.setYear(y);
System.out.println("\nDate with new values is: ");
date.displayDate();

System.out.println();//Output a newline

}
}