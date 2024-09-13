/*
Experiment No - 01
Title - To find out largest among 3 numbers
without using conditional operators or if statement.
Name of the programmer :- Pratik Ghute.
*/

#include<stdio.h>
#include<conio.h>
void main()
   {
      int no1,no2,no3,max;
      clrscr();
      printf("Enter three  numbers \n");
      scanf("%d%d%d",&no1,&no2,&no3);
      max=(no1+no2+abs(no1-no2))/2;
      max=(max+no3+abs(max-no3))/2;
      printf("Largest value is %d",max);
      getch();
   }




_______________________________________________________________

Input set : We can enter 3 integer numbers from -32,768 up to 32,767.
Output : We will get largest among 3 numbers.

For example,

Enter three  numbers
1 5 -1
Largest value is 5