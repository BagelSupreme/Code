
public class Car1 {
	private String name;
	private double price;

	public Car1(String n,double p) {
	name=n;
	if (p>0)
	price=p;
	}
	public void setName(String n) {
	name=n;
	}
	public void setPrice(double g) {
		if (price>0)
		price=g;
	}
	public String getName() {
	return name;
	}
	public double getPrice() {
	return price;
}}
