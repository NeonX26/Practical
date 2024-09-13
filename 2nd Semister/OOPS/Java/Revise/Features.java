import java.util.Scanner;
class Features
{
    public static void main(String[]args)
    {
        int Rno,Total,M1,M2,M3,Day;
        float Per;
        System.out.println("Enter the Roll Number");
        Scanner sc = new Scanner(System.in);
        Rno = sc.nextInt();
        // System.out.println(Rno);
        System.out.println("Enter the Marks of Three Subject");
        M1 = sc.nextInt();
        M2 = sc.nextInt();
        M3 = sc.nextInt();
        System.out.println("The Marks of Three subjects are:\n"+M1+"\n" +M2+"\n" +M3);
        Total = M1+M2+M3;
        Per = (float)Total/3;
        System.out.println("Total Marks:"+Total);
        System.out.println("Percentage:"+Per);
        if(Per<50)
        {
            System.out.println("The student is Fail..!!");
        }
        else
        {
            System.out.println("The Student is Pass..!!");
        }

        System.out.println("Enter the Day between 1 to 7");
        Day = sc.nextInt();
        switch (Day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
            break;
            case 5:
            System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
        
            default:
                System.out.println("Invalid day...!");
                break;
        }

        System.out.println("Demo oof Continue");
        for(int i=0;i<=5;i++)
        {
            if(i == 4)
            {
                continue;
            }
            System.out.print(i + " ");
        }

    }
}