/*
Experiment No - 12
Title - Write a program to demonstrate call by value
parameter passing technique.
Name of the programmer : Pratik Ghute.
*/
#include<stdio.h>
#include<conio.h>
void indec(int,int);
void main()
   {
      int a=100,b=200;
      clrscr();
      indec(a,b);
      printf("\nIn main function\n");
      printf("a = %d\n",a);
      printf("b = %d\n",b);
      getch();
   }
void indec(int a ,int b)
  {
    a++;
    b--;
    printf("\nInside the function\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("====================");
  }
/*
Output:

Inside the function
a = 101
b = 199
====================
In main function
a = 100
b = 200

*/