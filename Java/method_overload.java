package learn;
import java.util.Scanner; 

class overload{
	public void add(int x,int y) {
	System.out.println(x+y);
	}

	public void add(float x,float y) {
	System.out.println(x+y);
	}	
}

public class test {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println("Press 1 to Add INTEGER OR Press 2 to Add FLOAT");
		
		int choice;
		Scanner ch,num1,num2;
		ch = new Scanner(System.in);
		
		choice=ch.nextInt();
		overload obj= new overload();
		
		if (choice==1)
		{System.out.println("Enter two Integers to ADD :");
		 num1 = new Scanner(System.in);
		 num2 = new Scanner(System.in);
		 obj.add(num1.nextInt(), num2.nextInt());
		 }
		else if (choice==2)
		{System.out.println("Enter two Float to ADD :");
		 num1 = new Scanner(System.in);
		 num2 = new Scanner(System.in);
		 obj.add(num1.nextFloat(), num2.nextFloat());
		 }	
		else
			System.out.println("Invalid Choice.");
		}
}
