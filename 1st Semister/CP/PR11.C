/*
Experiment No - 11
Title - Write a program to test whether the given number is
prime number using function.
Name of the programmer : Pratik Ghute.
*/
#include<stdio.h>
#include<conio.h>
int isprime(int);
void main()
   {
      int num;
      clrscr();
      printf("Enter a number : ");
      scanf("%d",&num);
      if(isprime(num))
	printf("%d is prime number",num);
      else
	printf("%d is not prime number",num);
      getch();
   }
int isprime(int num)
  {
    int i;
    if(num == 0 || num == 1)
      return 0;
    for(i=2;i<=num/2;i++)
      {
	if(num%i==0)
	  return 0;
      }
    return 1;
  }
/*
Output:
Enter a number : 47
47 is prime number
*/