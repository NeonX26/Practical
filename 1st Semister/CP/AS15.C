/*Program No - 15
Title - Write a program to find the HCF(Highest Common Factor) of two numbers.
Name of the programmer : Pratik Ghute (MC23F14F020)
*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int num1, num2, hcf=1, min, i;
    clrscr();
    printf("To find HCF of two numbers\n");
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);
    if(num1 >= num2)
      min = num2;
    else
      min = num1;
    for(i=2;i<=min;i++)
      {
	if(num1%i == 0 && num2%i == 0)
	  hcf = i;
      }
    printf("\nHCF of %d and %d is %d",num1,num2,hcf);
    getch();
  }

/*
To find HCF of two numbers
Enter 1st number:81
Enter 2nd number:87

HCF of 81 and 87 is 3
*/