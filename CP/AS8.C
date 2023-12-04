/*Program No - 08
Title - Write a program to count number of digits in a number.
Name of the programmer : Pratik Ghute (MC23F14F020).
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int no,cnt=0;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&no);
    printf("Number of digits in %d are ",no);
    while(no > 0)
      {
	cnt++;
	no /= 10;
      }
    printf("%d",cnt);
    getch();
  }

/*
Enter a number : 8457
Number of digits in 8457 are 4                                                  
*/