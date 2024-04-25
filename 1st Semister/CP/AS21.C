/*Program No - 21
Title - Write a program to find the number of times digit
3 occurs in each and every number from 0 to n.
Name of the programmer : Pratik Ghute (MC23F14F020)
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int num, rem, cnt=0, i, tmp;
    clrscr();
    printf("To count number of times 3 occured from 0 to given number\n");
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=3;i<=num;i++)
      {
	tmp=i;
	while(tmp)
	  {
	    rem = tmp % 10;
	    if(rem == 3)
	      {
		cnt++;
	      }
	    tmp /= 10;
	  }
      }
    printf("%d times 3 occurred from 0 to %d",cnt,num);
    getch();
  }

/*
To count number of times 3 occured from 0 to given number
Enter a number : 100
20 times 3 occurred from 0 to 100
*/