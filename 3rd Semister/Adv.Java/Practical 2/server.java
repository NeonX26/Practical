import java.rmi.Naming;
import java.rmi.registry.LocateRegistry;

public class server{
    public static void main(String[] args) {
        try {
            LocateRegistry.createRegistry(1099);
            Arithmetic arithmetic = new ArithmeticImpl();
            Naming.rebind("rmi://localhost/ArithmeticService", arithmetic);
            System.out.println("ArithmeticServer is running....");
        }
        catch (Exception e) {
            e.printStackTrace();
        }
    }
}