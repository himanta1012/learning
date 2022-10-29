import java.util.*;
class ques5
{
	public static void main(String args[])
	{
		int num,x;
		int s1=0,s2=0,s3=0;
		System.out.print("Enter the number of elements = ");
		Scanner a = new Scanner(System.in);
		num = a.nextInt();
		for(int i=1;i<=num;i++)
		{
			System.out.print("Enter the number = ");
			x = a.nextInt();
			if(x==0)
				s1=s1+1;
			else if(x<0)
				s2=s2+1;
			else if(x>0)
				s3=s3+1;
			
		}
			System.out.println("Number of zeroes = "+s1);
			System.out.println("Number of negative = "+s2);
			System.out.println("Number of positive = "+s3);

	}
}
