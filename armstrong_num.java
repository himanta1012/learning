package practical_file;
import java.util.Scanner;
public class program2 {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int num, number, temp, total = 0;
 		Scanner var;
			var=new Scanner(System.in);
			num=var.nextInt();
        number = num;
        while (number != 0)
        {
            temp = number % 10;
            total = total + temp*temp*temp;
            number /= 10;
        }
        if(total == num)
            System.out.println(num + " is an Armstrong number");
        else
            System.out.println(num + " is not an Armstrong number");
        }

}
