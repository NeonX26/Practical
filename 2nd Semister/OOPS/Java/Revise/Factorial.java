import java.util.Scanner;
public class Factorial {
    public static void main(String[] args){
        int fact=1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to calculate the factorial:");
        int num = sc.nextInt();
        System.out.println("The Factorial of a number is");
        for(int i = 1; i<=num; i++)
        {
            fact*=i;
        }
        System.out.println(fact);
    }

}
