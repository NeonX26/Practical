#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
void inputMatrix(int M[][SIZE],int n)
  {
    int i,j;
    for(i=0;i<n;i++)
      {
	for(j=0;j<n;j++)
	  {
	    M[i][j]=random(10);
	  }
      }
  }
void printMatrix(int M[][SIZE],int n)
  {
    int i,j;
    for(i=0;i<n;i++)
      {
	for(j=0;j<n;j++)
	  {
	    printf("%5d",M[i][j]);
	  }
	printf("\n");
      }
  }
void multiply(int A[][SIZE],int B[][SIZE],int C[][SIZE],int n)
  {
     int i,j,k;
     for(i=0;i<n;i++)
       {
	 for(j=0;j<n;j++)
	   {
	     for(k=0;k<n;k++)
	       {
		 C[i][j]+=A[k][j]*B[i][k];
	       }
	   }
       }
  }
int main()
  {
    int A[SIZE][SIZE],B[SIZE][SIZE],C[SIZE][SIZE]={0},n=3;
    clrscr();
    randomize();
    inputMatrix(A,n);
    inputMatrix(B,n);
    printf("Matrix A\n");
    printMatrix(A,n);
    printf("Matrix B\n");
    printMatrix(B,n);
    multiply(A,B,C,n);
    printf("Matrix multiplication\n");
    printMatrix(C,n);
    getch();
    return 0;
  }