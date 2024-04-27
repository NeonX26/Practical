class A implements Runnable
{
    public void run()
    {
        int i;
        for (i=0;i<=10;i++)
        {
            System.out.println("Thread A  : " + i);
        }
    }
}
class B implements Runnable
{
    public void run()
    {
        int i;
        for(i=0;i<=10;i++)
        {
            System.out.println("Thread B  : " + i);
        }
    }
}
public class Threadd {
    public static void main(String[] args) {
        Thread t1 = new Thread(new A());
        Thread t2 = new Thread(new B());

        t1.setPriority(Thread.NORM_PRIORITY);  // Priority
        t2.setPriority(Thread.MAX_PRIORITY);
        t1.start();
        t2.start();

    }
}
