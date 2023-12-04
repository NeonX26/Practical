/*Program No - 13
Title - Write a program to read a set of numbers and find 
smallest and largest of them.
Name of the programmer : Pratik Ghute (MC23F14F020).
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int arr[50], small, i, large, no;
    clrscr();
    printf("How many numbers (Upto 50) : ");
    scanf("%d",&no);
    printf("Enter %d numbers\n",no);
    for(i=0;i<no;i++)
      {
	printf("%d :",i+1);
	scanf("%d",&arr[i]);
      }
    small = arr[0];
    large = arr[0];
    for(i=1;i<no;i++)
      {
	if(arr[i] < small)
	  {
	    small = arr[i];
	  }
	else if(arr[i] > large)
	  {
	    large = arr[i];
	  }
      }
    printf("\nSmallest is %d and \nLargest is  %d",small,large);
    getch();
  }

/*
How many numbers (Upto 50) : 10
Enter 10 numbers
1 :1
2 :2
3 :3
4 :4
5 :5
6 :6
7 :7
8 :8
9 :9
10 :7

Smallest is 1 and
Largest is  9
*/