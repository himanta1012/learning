package knocker;

import java.util.Scanner;

public class Program1 {
		double real, img;
	
	    Program1(double r, double i){
		this.real = r;
		this.img = i;
	   }
		
	   public static Program22 sum( Program1 c1, Program1 c2)
	   {   	Program1 temp = new Program22(0, 0);

	        temp.real = c1.real + c2.real;
	        temp.img = c1.img + c2.img;
	        return temp;
	    }
	   public static Program1 diff(Program1 c1, Program1 c2)
	   {
		   Program1 temp = new Program1(0, 0);

	        temp.real = c1.real - c2.real;
	        temp.img = c1.img - c2.img;
	        return temp;
	    }

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double p1=0,p2=0,p3=0,p4=0;
		Scanner ch;
		System.out.println("Enter real and imaginary part of 1st complex no. :");
		

                              ch = new Scanner(System.in);
		p1 = ch.nextDouble();
		ch = new Scanner(System.in);
		p2 = ch.nextDouble();
		
		System.out.println("Enter real and imaginary part of 2st complex no. :");
		ch = new Scanner(System.in);
		p3 = ch.nextDouble();
		ch = new Scanner(System.in);
		p4 = ch.nextDouble();

		
		Program1 c1 = new Program22(p1, p2);
		Program1 c2 = new Program22(p3, p4);
		
		Program1 temp = sum(c1, c2);
		Program1 temp1 = diff(c1, c2);
		
	       System.out.println("Sum is: "+ temp.real+" + "+ temp.img +"i");
	       System.out.println("\nDifference is: "+ temp1.real+" + "+ temp1.img +"i");
	    }
	}
