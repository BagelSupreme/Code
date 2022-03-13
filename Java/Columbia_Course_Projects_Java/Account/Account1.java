
public class account1 {
private double balance; 
public account1(double initialBalance)
{

if (initialBalance > 0.0)
balance = initialBalance;
}
public void credit(double amount)
{
balance = balance + amount;
}

public void debit(double amount)
{
if (amount > balance)
System.out.println("Debit amount exceeded account balance.");
if (amount <= balance)
balance = balance - amount;
}



public double getBalance()
{
return balance; 
}
}
