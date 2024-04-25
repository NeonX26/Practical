/*Program No - 07
Title - Write a program to split a number into digits.
Name of the programmer : Pratik Ghute (MC23F14F020).
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    unsigned int no,i=0;
    int arr[5];
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&no);
    printf("Digits of %u are : ",no);
    while(no > 0)
      {
	arr[i++] = no % 10;
	no /= 10;
      }
    for(i=i-1;i>=0;i--)
      {
	if(i==0)
	{
	  printf(" and %d.",arr[i]);
	  break;
	}
	printf(" %d,",arr[i]);
      }
    getch();
  }
/*
Output :
Enter a number : 764
Digits of 764 are :  7, 6, and 4.
*/