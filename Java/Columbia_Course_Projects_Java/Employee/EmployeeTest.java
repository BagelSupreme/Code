public class EmployeeTest {

/**
* @param args the command line arguments
*/
public static void main(String[] args) {
// TODO code application logic here
Employee emp1=new Employee("John",7000);
Employee emp2=new Employee("Brandon",6000);
System.out.println("the name of the first employee is :"+emp1.getName());
System.out.println("the yearly salary of "+emp1.getName()+" is :"+emp1.getMonthlysalary()*12);
System.out.println();
System.out.println("the name of the 2nd employee is :"+emp2.getName());
System.out.println("the yearly salary of "+emp2.getName()+" is :"+emp2.getMonthlysalary()*12);
System.out.println();
System.out.println("After 50 % raise in the salary, tha salary of "+emp1.getName()+" is:");
System.out.println((emp1.getMonthlysalary()*12)*1.5);
System.out.println();
System.out.println("After 50 % raise in the salary, tha salary of "+emp2.getName()+" is:");
System.out.println((emp2.getMonthlysalary()*12)*1.5);
}

}