class A extends Thread {
    public void run() {
        System.out.println("");
        for (int i = 0; i <= 5; i++) {
            System.out.println("\t From Thread A, i = " + i);
        }
        System.out.println("\n\t Exit from A");
    }
}

class B extends Thread {
    public void run() {
        System.out.println("");
        for (int j = 0; j <= 5; j++) {
            System.out.println("\t From Thread B, j = " + j);
        }
        System.out.println("\n\t Exit from B");
    }
}

class C extends Thread {
    public void run() {
        System.out.println("");
        for (int k = 0; k <= 5; k++) {
            // b) By extending Thread class:
            System.out.println("\t From Thread C, k = " + k);
        }
        System.out.println("\n\t Exit from C");
    }

}
class ThreadTest_b{

    public static void main(String args[]) {
        new A().start();
        new B().start();
        new C().start();
    }
}