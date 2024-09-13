class A implements Runnable
{
    public void run()
    {
        int i;
        for(i=0;i<=10;i++)
        System.out.println("Thread A"+i);
    }
}
class B extends Thread
{
    public void run()
    {
        int i;
        for(i=0;i>=10;i++)
        System.out.println("Thread B"+i); 
    }
}

public class Example {
    public static void main(String[] args) {
        Thread t1 = new Thread();
        Thread t2 = new Thread();
        t1.start();
        t2.start();
    }
}
