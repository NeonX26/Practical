public class WrapExample
{
    public static void main(String[] args)
    {
        Integer i1 = Integer.valueOf("1101110",2);
        System.out.println("The Variable:" + i1);
        
        Double d1 = Double.valueOf("3.14");
        System.out.println("The Variable:" + d1);
        
        int a = Integer.parseInt("123");
        System.out.println("The Variable:" + a);
        
        double b = Double.parseDouble("123.43");
        System.out.println("The Variable:" + b);
        
        int c = i1.intValue();
        System.out.println("The Variable:" + c);


    }
}