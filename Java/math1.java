import java.util.*;
class convert{
    
    static void btod(int a) {
    
        
       int h =a;
       int n=0;
       int sum=0;
       while(a>0)
       {
       int k=a%10;
       sum=(int) (sum+Math.pow(2,n)*k);
       a=a/10;
       n++;
       }
       System.out.print("Deciaml Value :"+sum);
}
}
class ques1
{
    public static void main(String args[]) {
      convert c= new convert();
        Scanner s = new Scanner(System.in);
       System.out.print("Enter the binary number :");
       int a = s.nextInt();
       c.btod(a);
    }
    
}
