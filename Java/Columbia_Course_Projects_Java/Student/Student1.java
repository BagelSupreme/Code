public class Student {
private String name;
private double grade;

public Student(String n,double g) {
name=n;
if (g>0)
grade=g;
}
public void setName(String n) {
name=n;
}
public void setSales(double g) {
	if (grade>0)
	grade=g;
}
public String getName() {
return name;
}
public double getGrade() {
return grade;
}

}
