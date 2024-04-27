class A extends Thread
{
    public void run()
    {
        int i;
        for (i=0;i<=10;i++)
        {
            System.out.println("Thread A" + i);
        }
    }
}
class B extends Thread
{
    public void run()
    {
        int i;
        for (i=0;i<=10;i++)
        {
            System.out.println("Thread B" + i);
        }
    }
}
public class Practice
{
    public static void main(String[] args) {
        // Thread t1 = new Thread(new A());
        // Thread t2 = new Thread(new B());
        A t1 = new A();
        B t2 = new B();

        t1.setPriority(Thread.MAX_PRIORITY);
        t2.setPriority(Thread.MIN_PRIORITY);


        t1.start();
        t2.start();
    }
}