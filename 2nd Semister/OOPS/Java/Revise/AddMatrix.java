import java.util.Scanner;
public class AddMatrix {
    public static void main(String[] args) {
        int i , j;
        int m1[][]= new int[3][3];
        int m2[][]= new int[3][3];
        int m3[][]= new int[3][3];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the elements of first matrix:");
        for (i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                m1[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter the elements of Second matrix:");
        for (i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                m2[i][j]=sc.nextInt();
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            m3[i][j]=m1[i][j]*m2[i][j];
            
        }
        System.out.println("Addition of the matrix:");
        for (i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                System.out.print(m3[i][j] + "\t");
            }
        }
    }
}
