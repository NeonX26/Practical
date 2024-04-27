class TypeCast
{
    public static void main(String[] args)
    {
        System.out.println("Variable Created");
        char c = 'x';
        byte b = 50;
        short s= 1996;
        int i = 123456789;
        long L = 12345654321L;
        float f1 = 3.14f;
        float f2 = 1.2e-5f;
        double d2 = 0.000000987;

        System.out.println("C = " + c);
        System.out.println("B ="+ b);
        System.out.println("S ="+s);
        System.out.println("I ="+ i);
        System.out.println("L ="+L);
        System.out.println("f1 ="+f1);
        System.out.println("f2 ="+f2);
        System.out.println("d2 =" +d2);

        System.out.println("Type Convreted");
        short s1 = (short)b;
        short s2 = (short)i;
        float n1 = (float)L;
        int m1 =(int)f1;

        System.out.println("(short)b = "+s1);
        System.out.println("(short)i = "+s2);
        System.out.println("(float)l = "+n1);
        System.out.println("(int)f1 = "+m1);
    }
}