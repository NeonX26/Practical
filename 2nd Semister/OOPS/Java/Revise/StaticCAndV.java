public class StaticCAndV {
    // Static variable
    static int a = 10;

    // Non-static variable
    int b = 20;

    // Static method
    static void staticMethod() {
        System.out.println("Static method called");
        System.out.println("Value of static variable a: " + a);
    }

    // Non-static method
    void nonStaticMethod() {
        System.out.println("Non-static method called");
        System.out.println("Value of non-static variable b: " + b);
    }

    public static void main(String[] args) {
        // Calling static method doesn't require an instance of the class
        staticMethod();

        // To call non-static method, we need an instance of the class
        Main obj = new Main();
        obj.nonStaticMethod();

        // We can access static variable using class name or object
        System.out.println("Accessing static variable using class name: " + a);
        System.out.println("Accessing static variable using object: " + obj.a);

        // We can't access non-static variable using class name
        // System.out.println("Accessing non-static variable using class name: " + b); // This will give compile time error

        // We can access non-static variable using object
        System.out.println("Accessing non-static variable using object: " + obj.b);
    }
}