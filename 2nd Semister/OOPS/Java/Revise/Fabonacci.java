import java.util.Scanner;
public class Fabonacci {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms  you want in Fibonacci series:");
        int num = sc.nextInt();
        int Fno = 0;
        int Sno = 1;
        int  nextTerm;
        System.out.println("Fabonacci Series is : ");
        System.out.println(Fno+"\n"+Sno);
        for(int i=0; i<num; i++)
        {
            nextTerm = Fno + Sno;
            Fno = Sno;
            Sno = nextTerm;
            System.out.println(nextTerm);
        }
    }
}
