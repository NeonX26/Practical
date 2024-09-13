import java.util.Scanner;
public class ArrayNew {
    public static void main(String[] args) {
        Scanner ar = new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int size;
        size = ar.nextInt();
        int Arr[] = new int[size];
        System.out.println("Enter the number of elements you want in your array:");
        for(int i=0; i<size ; i++)
        {
            Arr[i] = ar.nextInt();
        }
        System.out.println("\nElements in the array are : ");
        for(int i=0; i<size; i++)
        {
            System.out.println(Arr[i]);
        }
        
    }
}
