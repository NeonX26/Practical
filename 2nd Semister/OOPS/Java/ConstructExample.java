class Rectangle {
    int l,b,a;
    int length,breadth;
    Rectangle()
     {
        l = 120;
        b = 12;
     }
    void getdata()
    {
        a = l * b;
        System.out.println("Area of Rectangle using default constructor is :" +a);
    }
    Rectangle(int L,int B)
    {
        length = L;
        breadth = B;
    }
    Rectangle(Rectangle obj)
    {
        System.out.println("Copy Constructor invoked");
        length = obj.length;
        breadth = obj.breadth;
    }
    int area()
    {
        return(length*breadth);
    }
}
public class ConstructExample
    {
        public static void main(String[] args) {
            Rectangle r1 = new Rectangle();
            r1.getdata();

            Rectangle r2 = new Rectangle(5,6);
            System.out.println("Area of Rectangle using parameterized constructor is :"+r2.area());
            Rectangle r3 = new Rectangle(15,10);
            Rectangle r4 = new Rectangle(r3);
            System.out.println("Area of rectangle ="+r3.area());
            System.out.println("Area of second rectangle ="+r4.area());
        }
    }
 
