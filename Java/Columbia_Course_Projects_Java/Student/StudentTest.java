public class StudentTest {

/**
* @param args the command line arguments
*/
public static void main(String[] args) {
// TODO code application logic here
Student s1=new Student("John",74);
Student s2=new Student("Jane", 67);
System.out.println("the name of the first student is :"+s1.getName());
System.out.println("the grade "+s1.getName()+" got is :"+s1.getGrade());
System.out.println();
System.out.println("the name of the 2nd student is :"+s2.getName());
System.out.println("the grade "+s2.getName()+" got is :"+s2.getGrade());
System.out.println();
System.out.println("After 10% raise in the grade, the grade of "+s1.getName()+" is:");
System.out.println((s1.getGrade())+ 10);
System.out.println();
System.out.println("After 10% raise in the grade, the grade of "+s2.getName()+" is:");
System.out.println((s2.getGrade())+10);
}
}