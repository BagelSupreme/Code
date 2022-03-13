
public class InvoiceTest {

/**
* @param args the command line arguments
*/
public static void main(String[] args) {
// TODO code application logic here
Invoice invoice1 = new Invoice( "1234", "Hammer", 2, 14.95 );

// display invoice1
System.out.println( "Original invoice information" );
System.out.printf( "Part number: %s\n", invoice1.getPartNumber() );
System.out.printf( "Description: %s\n",
invoice1.getPartDescription() );
System.out.printf( "Quantity: %d\n", invoice1.getQuantity() );
System.out.printf( "Price: %.2f\n", invoice1.getPricePerItem() );
System.out.printf( "Invoice amount: %.2f\n",
invoice1.getInvoiceAmount() );

// change invoice1's data
invoice1.setPartNumber( "001234" );
invoice1.setPartDescription( "Yellow Hammer" );
invoice1.setQuantity( 3 );
invoice1.setPricePerItem( 19.49 );

// display invoice1 with new data
System.out.println( "\nUpdated invoice information" );
System.out.printf( "Part number: %s\n", invoice1.getPartNumber() );
System.out.printf( "Description: %s\n",
invoice1.getPartDescription() );
System.out.printf( "Quantity: %d\n", invoice1.getQuantity() );
System.out.printf( "Price: %.2f\n", invoice1.getPricePerItem() );
System.out.printf( "Invoice amount: %.2f\n",
invoice1.getInvoiceAmount() );

Invoice invoice2 = new Invoice( "5678", "PaintBrush", -5, -9.99 );

// display invoice2
System.out.println( "\nOriginal invoice information" );
System.out.printf( "Part number: %s\n", invoice2.getPartNumber() );
System.out.printf( "Description: %s\n",
invoice2.getPartDescription() );
System.out.printf( "Quantity: %d\n", invoice2.getQuantity() );
System.out.printf( "Price: %.2f\n", invoice2.getPricePerItem() );
System.out.printf( "Invoice amount: %.2f\n",
invoice2.getInvoiceAmount() );

// change invoice2's data
invoice2.setQuantity( 3 );
invoice2.setPricePerItem( 9.49 );

// display invoice2 with new data
System.out.println( "\nUpdated invoice information" );
System.out.printf( "Part number: %s\n", invoice2.getPartNumber() );
System.out.printf( "Description: %s\n",
invoice2.getPartDescription() );
System.out.printf( "Quantity: %d\n", invoice2.getQuantity() );
System.out.printf( "Price: %.2f\n", invoice2.getPricePerItem() );
System.out.printf( "Invoice amount: %.2f\n",
invoice2.getInvoiceAmount() );
}
}