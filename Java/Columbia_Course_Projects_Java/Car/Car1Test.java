
public class Car1Test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Car1 c1=new Car1("Toyota_camry",30000);
		Car1 c2=new Car1("Honda_civic", 25000);
		System.out.println("the name of the first car is :"+c1.getName());
		System.out.println("the price of "+c1.getName()+" is :"+c1.getPrice());
		System.out.println();
		System.out.println("the name of the 2nd car is :"+c2.getName());
		System.out.println("the price of "+c2.getName()+" is :"+c2.getPrice());
		System.out.println();
		System.out.println("After $400 raise in the price, the price of "+c1.getName()+" is:");
		System.out.println((c1.getPrice())+ 400);
		System.out.println();
		System.out.println("After $400 raise in the price, the price of "+c2.getName()+" is:");
		System.out.println((c2.getPrice())+400);
		
	}

}
