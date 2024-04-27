import java.util.Scanner;
public class GetInputData {
    public static void main(String[] args) {
        int num;
        float fnum,add;
        String str;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter an string: ");
        str=in.nextLine();
        System.out.println("Enter an integer: ");
        num=in.nextInt();
        System.out.println("Enter a floating number:");
        fnum=in.nextFloat();
        add= fnum+num;
        System.out.println("The Addition of Integer and Float is ="+ add);
    }
}
