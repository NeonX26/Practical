class A implements Runnable
{
    public void run()
    {
        System.out.println("");
        for (int i=0;i<=5;i++)
        {
            System.out.println("\tFrom Thread A,i="+i);

        }
        System.out.println("\n\tExit From A");
    }
}
class B implements Runnable
{
    public void run()
    {
        System.out.println("");
        for(int j=0;j<=5;j++)
        {
            System.out.println("\tFrom Thread B,j="+j);
        }
        System.out.println("\n\tExit From B");
    }
}
class C implements Runnable
{
    public void run()
    {
        System.out.println("");
        for(int k=0;k<=5;k++)
        {
            System.out.println("\tFrom Thread C,k="+k);
        }
    }
}
class ThreadTest
{
    public static void main(String args[])
    {
        Thread t1 = new Thread(new A());
        Thread t2 = new Thread(new B());
        Thread t3 = new Thread(new C());
        t1.start();
        t2.start();
        t3.start();
    }
}
