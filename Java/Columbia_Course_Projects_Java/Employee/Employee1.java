public class Employee {
private String name;
private double monthlysalary;

public Employee(String n,double ms) {
name=n;
monthlysalary=ms;
}
public void setName(String n) {
name=n;
}
public void setMonthlysalary(double ms) {
monthlysalary=ms;
}
public String getName() {
return name;
}
public double getMonthlysalary() {
return monthlysalary;
}

}
