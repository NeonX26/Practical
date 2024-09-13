public class TestOverLoading1 {
    public static void main(String[] args) {
        System.out.println(Adder.add(11,111));
        System.out.println(Adder.add(11,111,1111));

    }
}
class Adder{
    static int add(int a, int b){
        return a+b ;
    }
    static int add(int a, int b, int c){
        return a+b+c ;
    }
}