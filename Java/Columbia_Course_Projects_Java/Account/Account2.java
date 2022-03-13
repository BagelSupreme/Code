import java.util.Scanner;

public class account2 {

public static void main(String[] args) {
// TODO Auto-generated method stub
account1 account1 = new account1(50.00); //create account object
account1 account2 = new account1(-7.53); //create account object
//display initial balance of each object
System.out.printf("Account1 Balance: $%.2f\n", account1.getBalance());
System.out.printf("Account2 Balance: $%.2f\n", account2.getBalance());
//create Scanner to obtain input from command window
Scanner input = new Scanner(System.in);
double depositAmount; //deposit amount read from user
System.out.println("Enter deposit amount for account1: ");
depositAmount = input.nextDouble();
System.out.printf("\nadding %.2f to account1 balance\n\n", depositAmount);
account1.credit(depositAmount); //add to account1 balance
// display balances
System.out.printf("account1 balance: $%.2f\n", account1.getBalance());
System.out.printf("account2 balance: $%.2f\n", account2.getBalance());
System.out.println("Enter deposit amount for account2: ");
depositAmount = input.nextDouble();
System.out.printf("\nadding %.2f to account2 balance\n\n", depositAmount);
account2.credit(depositAmount); //add to account1 balance
//display balances
System.out.printf("account1 balance: $%.2f\n", account1.getBalance());
System.out.printf("account2 balance: $%.2f\n", account2.getBalance());
double withdrawalAmount; //withdrawal amount read from user
System.out.println("Enter withdrawal amount from account1: ");
withdrawalAmount = input.nextDouble();
System.out.printf("\nsubtracting %.2f from account1 balance\n",
withdrawalAmount); //subtract amount from account1
account1.debit(withdrawalAmount);
//display balances
System.out.printf("account1 balance: $%.2f\n", account1.getBalance());
System.out.printf("account2 balance: $%.2f\n", account2.getBalance());
System.out.println("Enter withdrawal amount from account2: ");
withdrawalAmount = input.nextDouble();
System.out.printf("\nsubtracting %.2f from account2 balance\n",
withdrawalAmount); //subtract amount from account1
account2.debit(withdrawalAmount);
//display balances
System.out.printf("account1 balance: $%.2f\n", account1.getBalance());
System.out.printf("account2 balance: $%.2f\n", account2.getBalance());
}

}
