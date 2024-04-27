class Super {
    int x;
    Super(int x){
        this.x = x;
    }
    void display(){
       System.out.println("super-x =" + x); 
    }
}

class sub extends Super{

    int y;
    sub(int x,int y){
        super(x);
        this.y =y;
    }
    void display(){
        super.display();
        System.out.println("Sub-y =" +y);
    }
}

public class OverrideTest{
    public static void main(String[] args){
        sub s1 =new sub(100,200);
        s1.display();
        Super s2 =new Super(100);
        s2.display();
    }
}