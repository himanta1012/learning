import java.util.*;
class ques6
{
	public static void main(String args[])
	{
		int num;
		float p=1;
		float sum=0;
		System.out.print("Enter the number of terms = ");
		Scanner a = new Scanner(System.in);
		num = a.nextInt();
		
		for(int i=1;i<=num;i++)
		{
			p=1;
			for(int j=i;j>=1;j--)
			{
				p=p*j;
			}
			sum=sum+(i/p);
		}
		System.out.print("Sum of the series = "+sum);
	}
}
