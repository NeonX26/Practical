import java.util.Scanner;

class Palindrome {
    public static void main(String args[]) {

        int rem, sum = 0, temp, no;
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter a Number : ");
        no = scan.nextInt();
        temp = no;
        while (no > 0) {
            rem = no % 10;
            sum = (sum * 10) + rem;
            no = no / 10;
        }
        if (temp == sum)
            System.out.println("It is a palindrome number ");

        else
            System.out.println("It is not a palindrome number");

    }
}
