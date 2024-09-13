class A implements Runnable {
    public void run() {
        System.out.println(" ");
        for (int i = 0; i <= 5; i++) {
            System.out.println("\t From Thread A, i = " + i);
        }
        System.out.println("\n\t Exit from A");
    }
}

class B implements Runnable {
    public void run() {
        System.out.println(" ");
        for (int j = 0; j <= 5; j++) {
            System.out.println("\t From Thread B, j = " + j);
        }
        System.out.println("\n\t Exit from B");
    }
}

class C implements Runnable {
    public void run() {
        System.out.println(" ");
        for (int k = 0; k <= 5; k++) {
            System.out.println("\t From Thread C, k = " + k);
        }
        System.out.println("\n\t Exit from C");
    }
}

public class Thread{
    public static void main(String args[]) {
        Thread t1 = new Thread(new A());
        Thread t2 = new Thread(new B());
        Thread t3 = new Thread(new C());
        t1.start();
        t2.start();
        t3.start();
    }
}