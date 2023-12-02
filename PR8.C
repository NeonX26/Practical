/*
Experiment No - 08
Title - Write a program to find square, square root, cube, cube root of
a number using switch case statement.
Name of the programmer : Pratik Ghute.
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
   {
      int num, choice;
      double result;
      double a=0.1;
      clrscr();
      printf("Enter a number : ");
      scanf("%d",&num);
      printf("\n1.Squre\n2.Squre root\n3.Cube\n4.Cube root\n");
      scanf("%f",&a);
      printf("Enter your choice : ");
      scanf("%d",&choice);
      switch(choice)
	{
	  case 1:result = num * num;
		 break;
	  case 2:result = sqrt(num);
		 break;
	  case 3:result = num * num * num;
		 break;
	  case 4:result = pow(num,1/3.0);
		 break;
	  default:printf("Wrong choice");
	  getch();
	  return;
	}
      printf("The result is : %lf",result);
      getch();
   }

/*
Output:
Enter a number : 8

1.Squre
2.Squre root
3.Cube
4.Cube root
4
Enter your choice : 4
The result is : 2.000000
*/