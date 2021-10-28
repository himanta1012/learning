package learning;
import java.util.Scanner;

public class program8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int low, high;
		Scanner num1,num2;
		System.out.println("Enter the range to find prime number in between them :");
		num1 = new Scanner(System.in);
		num2 = new Scanner(System.in);
		
		low = num1.nextInt();
		high= num2.nextInt();
		boolean flag=false;
		System.out.println("Prime Numbers between "+low+ " and "+ high+ " are :");
		
        while (low < high) {
            	for(int i = 2; i <= low/2; ++i) {
               flag = false;
                if(low % i == 0) {
                    flag = true;
                    break;
                }
            
            	}
            if (!flag)
                System.out.print(low + " ");

            ++low;
        }
                }
        }
