/* Experiment No - 14                     Date21/10/2023.
Title - Write a recursive program to test whether given number is prime.
Name of programmer - Pratik Ghute  Roll No-MC23F14F018.
*/
#include<stdio.h>
#include<conio.h>

int isprime(int,int);
int main()
   {
      int num;
      clrscr();
      printf("Enter a number: ");
      scanf("%d",&num);
      if(isprime(num,2))
	{
	   printf("%d is a prime number",num);
	   getch();
	   return 0;
	}
      printf("%d is not prime number" ,num);
      getch();
    }
int isprime (int num,int i)
    {
       if(num == 2) return 1;
       if(num%i == 0) return 0;
       if(i >= num/2) return 1;
       else return isprime(num, ++i);
    }

/*
Output:
Enter a number: 23
23 is a prime number.
*/