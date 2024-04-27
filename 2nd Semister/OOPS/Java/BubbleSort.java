import java.util.Scanner;
import java.lang.*;
public class BubbleSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int lim;
        System.out.println("Enter the limit of array: ");
        lim = sc.nextInt();
        int list[] = new int[lim];
        System.out.println("Enter the element to be sorted");
        for (int i=0 ;i<list.length ; i++)
        {
            list[i] = sc.nextInt();
        }
        System.out.println("The Stored element in array are :");
        for (int i=0 ;i<list.length ; i++)
        {
            System.out.print(list[i] + " ");
        }

        for(int i=0; i<list.length; i++)
        {
            for(int j=i+1; j<list.length; j++)
            {
                if(list[i]> list[j])
                {
                    int t = list[i];
                    list[i]=list[j];
                    list[j]=t;
                }
            }
        }
    }
}
