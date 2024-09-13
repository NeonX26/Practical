public class Exception {
    public static void main(String[] args) {
        try {
            int number = 5 / 0;
            System.out.println("Not executed!!!");
        } catch (ArithmeticException e) {
            // TODO: handle exception
            System.out.println(e);
            System.out.println("Caught ArithmeticException");
        } finally 
        {
            System.out.println("Finally block always executes");
        }
    }
}
