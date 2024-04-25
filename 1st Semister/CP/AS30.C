/*Program No - 30
Title - Write a program to print Nth term in fibonacci series
Name of the programmer : Pratik Ghute (MC23F14F020)
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int a=0,b=1,c,num,i;
    clrscr();
    printf("Enter which term : ");
    scanf("%d",&num);
    if(num == 1)
      {
	printf("%d",a);
      }
    else if(num == 2)
      {
	printf("%d",b);
      }
    else
      {
	for(i=3;i<=num;i++)
	  {
	    c=a+b;
	    if(i==num)
	      printf("%d",c);
	    a=b;
	    b=c;
	  }
      }
    getch();
  }

/*
Output:
Enter which term : 24
28657

Enter which term : 4
2

*/