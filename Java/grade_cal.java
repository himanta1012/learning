package learn;
import java.util.Scanner;

public class test1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int marks;
				System.out.println("Enter Marks to get GRADES");
				Scanner num;
		num = new Scanner(System.in);		
		marks=num.nextInt();
		switch(marks/10)
		{ 
		case(9):System.out.println("Grade A");
		break;
		case(8):System.out.println("Grade B");
		break;
		case(7):System.out.println("Grade C");
		break;
		case(6):System.out.println("Grade D");
		break;
		case(5):System.out.println("Grade E");
		break;
		case(4):System.out.println("Grade F");
    break;
} } }
