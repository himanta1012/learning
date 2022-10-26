import java.util.*;
class ques1
{
	public static void main(String args[])
	{
		int num;
		System.out.print("Enter the number = ");
		Scanner a = new Scanner(System.in);
		num = a.nextInt();
		for(int i=1;i<=10;i++)
		{
			System.out.println(num+" x "+i+" = "+(num*i));
		}

	}
}
