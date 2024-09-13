/*
Experiment No - 10
Title - Write a program to multiply matrix A with matrix B.
Name of the programmer : Pratik Ghute.
*/
#include<stdio.h>
#include<conio.h>
void minput(int arr[][3]);
void mprint(int arr[][3]);
void main()
   {
      int A[3][3], B[3][3], C[3][3], i,j,k;
      clrscr();
      minput(A);
      minput(B);
      for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	    {
	      C[i][j]=0;
	      for(k=0;k<3;k++)
		{
		  C[i][j] = C[i][j] + A[i][k] * B[k][j];
		}
	    }
	}
      mprint(A);
      mprint(B);
      mprint(C);
      getch();
   }
void minput(int arr[3][3])
  {
    int i,j;
    printf("Enter a matrix 3X3\n");
    for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	  {
	    scanf("%d",&arr[i][j]);
	  }
      }
  }
void mprint(int arr[3][3])
  {
    int i,j;
    printf("\n");
    for(i=0;i<3;i++)
      {
	for(j=0;j<3;j++)
	  {
	    printf("%5d",arr[i][j]);
	  }
	printf("\n");
      }
  }
/*
Output:
Enter a matrix 3X3
9 9 9
9 9 9
9 9 9
Enter a matrix 3X3
1 0 0
0 1 0
0 0 1

    9    9    9
    9    9    9
    9    9    9

    1    0    0
    0    1    0
    0    0    1

    9    9    9
    9    9    9
    9    9    9
*/