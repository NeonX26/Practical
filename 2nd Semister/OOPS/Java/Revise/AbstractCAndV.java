// Abstract class
public abstract class Animal {
    // Abstract method
    public abstract void sound();

    // Non-abstract method
    public void sleep() {
        System.out.println("Animal is sleeping");
    }
}

// Class extending the abstract class
public class Dog extends Animal {
    // Implementing the abstract method
    @Override
    public void sound() {
        System.out.println("Dog barks");
    }

    // Overriding the non-abstract method
    @Override
    public void sleep() {
        System.out.println("Dog is sleeping");
    }
}

// Class extending the abstract class
public class Cat extends Animal {
    // Implementing the abstract method
    @Override
    public void sound() {
        System.out.println("Cat meows");
    }

    // Overriding the non-abstract method
    @Override
    public void sleep() {
        System.out.println("Cat is sleeping");
    }
}

// Main class
public class AbstractCAndV {
    public static void main(String[] args) {
        // Creating objects of the classes
        Dog dog = new Dog();
        Cat cat = new Cat();

        // Calling the methods
        dog.sound();
        dog.sleep();

        cat.sound();
        cat.sleep();
    }
}