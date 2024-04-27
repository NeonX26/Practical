import java.util.Scanner;
public class Isprime {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int num, i, count=0;
        System.out.println("Enter a number to check the given number is Prime or not..");
        num = sc.nextInt();
        for(i=2;i<=num/2;i++)
        {
            if(num%i == 0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            System.out.println("This number is Prime Number");
        }
        else
        {
            System.out.println("This number is not a prime number");
        }
    }
    
}
