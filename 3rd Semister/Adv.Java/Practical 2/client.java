import java.rmi.*;

public class client{
    public static void main(String[] args) {
        try {
            Arithmetic arithmetic =(Arithmetic) Naming.lookup("rmi://localhost/ArithmeticService");

            int sum = arithmetic.add(5,3);
            int diffrenece = arithmetic.subtract(5,3);

            System.out.println("Addition" + sum);
            System.out.println("Subtraction" + diffrenece);
        }
        catch(Exception e){
            e.printStackTrace();

        }
    }
}