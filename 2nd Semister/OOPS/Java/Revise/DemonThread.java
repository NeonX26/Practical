public class DemonThread  extends Thread
{
    public void  run() 
    {
        if(Thread.currentThread().isDaemon())
        {
            System.out.println( "Demon thread is running" );
        }
        else
        {
            System.out.println( "Normal thread is running" );
        }
    }
    public static void main(String[] args) 
    {
        DemonThread dt1 = new DemonThread();
        DemonThread dt2 = new DemonThread();
        DemonThread dt3 = new DemonThread();
        dt1.setDaemon(true);
        dt1.start();
        dt2.start();
        dt3.start();
    }

    
}
