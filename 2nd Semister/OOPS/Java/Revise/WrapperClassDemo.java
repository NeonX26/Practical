class WrapperClassDemo{
    public static void main(String[] args) {
        Integer i1 = Integer.valueOf("1101",2); //Reference variable
        System.out.println("Integer value : " +i1);

        Double d1 = Double.valueOf("3.14");
        System.out.println("Double Value: "+d1);

        int a = Integer.parseInt("123"); //primitive datatype variable
        System.out.println("The Variable" +a);

        double c = Double.parseDouble("24.2");
        System.out.println("Value of c is:"+c);
    }
}