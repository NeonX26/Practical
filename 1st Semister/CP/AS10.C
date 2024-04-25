/*Program No - 10
Title - Write a program in c to sum of the series 1+11+111+1111+11111
Name of the programmer : Pratik Ghute (MC23F14F020)
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int no, ans=1, i, term=1;
    clrscr();
    printf("Enter which term : ");
    scanf("%d",&no);
    for(i=2;i<=no;i++)
      {
	term = term * 10 + 1;
	ans = ans + term;
      }
    printf("\nSum of series upto %dth term is  %d",no,ans);
    getch();
  }

/*
Enter which term : 5
                                                                                
Sum of series upto 5th term is  12345                                           
*/