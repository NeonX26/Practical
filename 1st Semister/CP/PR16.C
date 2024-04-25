/*
Experiment No - 16			Date:26/10/2023
Title - Write a program to sort an array using pointer
Name of the programmer - Pratik Ghute   MC23F14F018
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void disarr(int *a)
  {
    int i;
    for(i=0;i<10;i++)
      {
	printf("%5d",*(a+i));
      }
  }
void sort(int *a)
  {
    int i,j,t;
    for(i=0;i<9;i++)
      {
	for(j=i+1;j<10;j++)
	  {
	    if(*(a+i) > *(a+j))
	      {
		t = *(a+i);
		*(a+i) = *(a+j);
		*(a+j) = t;
	      }
	  }
      }
  }
int main()
  {
    int *a,i;
    clrscr();
    randomize();
    for(i=0;i<10;i++)
      {
	*(a+i) = random(100);
      }
    printf("\nArray before sort : \n");
    disarr(a);
    sort(a);
    printf("\nArray after sort : \n");
    disarr(a);
    getch();
    return 0;
  }
/*
Output:

Array before sort :
   45   41   40    7   67   43   42    5   13   93
Array after sort :
    5    7   13   40   41   42   43   45   67   93
*/