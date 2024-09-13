/*Program No - 29
Title - Write a program to find frequency of a specific digit in a number.
Name of the programmer : Pratik Ghute (MC23F14F020)
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int dig, cnt=0;
    long num, tmp;
    clrscr();
    printf("To count a digit in a number\n");
    printf("Enter a number : ");
    scanf("%ld",&num);
    printf("Enter a digit : ");
    scanf("%d",&dig);
    tmp = num;
    while(tmp)
      {
        if(tmp%10 == dig)
          cnt++;
        tmp /= 10;
      }
    printf("%d number of times  %d  is present in %ld",cnt,dig,num);
    getch();
  }

/*
Output :
To count a digit in a number
Enter a number : 111143
Enter a digit : 1
4 number of times  1  is present in 111143
*/