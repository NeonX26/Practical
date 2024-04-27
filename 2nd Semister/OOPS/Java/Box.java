public class Box {
    private double width;
    private double height;
    private double depth;

    //Contruct clone of an object
    Box(Box ob) 
    {
        width = ob.width;
        height = ob.height;
        depth =ob.depth;
    }
    //constructor used when all dimension are sprcified
    Box(double w, double h, double d)
    {
        width = w;
        height = h;
        depth = d;
    }

    //constructor used when no dimension specified
    Box()
    {
        width = -1;
        height = -1;
        depth = -1;
    }
    
    //constructor used when cude is created
    Box(double len)
    {
        width = height = depth = len;
    }

    //contructor & return volume
    double  volume()
    {
        return(width*height*depth);
    }
}

//Add Weight
class BoxWeight extends Box
{
    private double weight;

//constructclone of an object
BoxWeight(BoxWeight ob)
{
    super(ob);
    weight = ob.weight;
}

//Constructor used when all dimension are speicified
BoxWeight(double w, double h, double d, double m)
{
    super(w,h,d);
    weight = m;
}

//Constructor used when cube is created
BoxWeight(double len,double m)
{
    super(len);
    weight = m;
}

//Constructor used when no dimension specified
BoxWeight()
{
    super();
    weight = -1;
}

//Construct used when cube is created
BoxWeight(double len,double m)
{
    
}