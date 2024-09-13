class Room
{
    int length ,breadth;
    Room(int x,int y)
    {
        length = x;
        breadth = y;
    }
    int area()
    {
        return(length*breadth);
    }
}
class  Main extends Room
{
    int  height ;
    Main(int x,int y,int z)
    {
        super(x,y);
        height=z;
    }
    int volume()
    {
        return(area() * height);
    }
}
public class Inheritance {
    public static void main(String[] args) {
      Main r1 = new Main(12,3,5);
      System.out.println("Area of the room is " +r1.area());
      System.out.println("volume of the room is " +r1.volume());
    }
}
