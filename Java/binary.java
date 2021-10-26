import java.util.Scanner;
 
public class BinaryUsingWrapper {
 
 public static void main(String[] args) {
 
  System.out.print("Enter the number :: ");
  Scanner s = new Scanner(System.in);
  Integer num = s.nextInt();  // Integer wrapper class
  
  // Use toBinaryString( ) Method of Integer wrapper class
  String binaryNumber = Integer.toBinaryString(num); 
  System.out.println("Binary number of " + num + " is :: "+binaryNumber);
 }
}
