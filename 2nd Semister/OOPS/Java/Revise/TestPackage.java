import Package.*;
// import Package.ClassB;
import package2.ClassX;

public class TestPackage {
    public static void main(String[] args) {
        ClassA obj = new ClassA();
        obj.displayA();

        ClassB objB = new ClassB();
        objB.displayB();

        ClassX objX = new ClassX();
        objX.displayX();
    }
}
