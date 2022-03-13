
public class TV1 {
	private String name;
	private double price;;

	//constructor
	public TV1(String n, double p )
	{
	name = n;
	if (p>0) {
	price = p;}
	}
	public void setName(String n)
	{
	name = n;
	}

	public String getName()
	{
	return name;

	}
	public void setPrice(double price2)
	{
		if (price>0) {
			price = price2;}
	}

	public double getPrice()
	{
	return price;
	}

}	
