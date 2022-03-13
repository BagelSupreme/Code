import java.util.Scanner;


public class TV1Test {

/**
* @param args the command line arguments
*/
public static void main(String[] args) {
// TODO code application logic here
Scanner input = new Scanner(System.in);
TV1 emp1 = new TV1("Samsung ", 2000);

System.out.println("the name of the first tv is :"+emp1.getName());
System.out.println("the price of "+emp1.getName()+" is :"+emp1.getPrice());
System.out.println();

String name;
double price;


System.out.println("Enter the name\n");
name = input.nextLine();
System.out.println("Enter the price\n");
price = input.nextDouble();


emp1.setName(name);
emp1.setPrice(price);
System.out.println("the name of the new tv is :"+emp1.getName());
System.out.println("the price of "+emp1.getName()+" is :"+emp1.getPrice());

System.out.println();//Output a newline
}
}
