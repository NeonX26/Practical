/*
Experiment No - 09
Title - Write a program to search a number in given array.
Name of the programmer : Pratik Ghute.
*/
#include<stdio.h>
#include<conio.h>
void main()
   {
      int arr[10] = {23, 45, 65 ,76, 98, 90, 83, 78, 63, 91},i , num;
      clrscr();
      printf("Enter a number : ");
      scanf("%d",&num);
      for(i=0;i<10;i++)
	{
	  if(num == arr[i])
	    {
	      printf("%d found at %d index",num,i);
	      getch();
	      return;
	    }
	}
      printf("Element not found");
      getch();
   }

/*
Output:
Enter a number : 63
63 found at 8 index

*/