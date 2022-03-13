import javax.swing.JOptionPane;

public class task3 {

/**
* @param args the command line arguments
*/
public static void main(String[] args) {
// TODO code application logic here
String firstNumber; 
String secondNumber; 

int number1; 
int number2; 
int sum; 
firstNumber = JOptionPane.showInputDialog( "Enter first integer" );

secondNumber =
JOptionPane.showInputDialog( "Enter second integer" );

number1 = Integer.parseInt( firstNumber );
number2 = Integer.parseInt( secondNumber );

sum = number1 + number2; 

String message = String.format( "The sum is %d", sum );

JOptionPane.showMessageDialog( null, message );
}
}