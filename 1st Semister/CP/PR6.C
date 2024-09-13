/*
Experiment No - 06
Title - Write a program to check whether the
given number is palindrome or not using do while loop.
Name of the programmer : Pratik Ghute.
*/

void main()
   {
      int num1,num2=0,rem,tmp;
      clrscr();
      printf("Enter a number : ");
      scanf("%d",&num1);
      tmp=num1;
      do
	{
	  rem = tmp % 10;
	  tmp = tmp / 10;
	  num2 = num2 * 10 + rem;
	}while(tmp > 0);
      if(num1 == num2)
	{
	  printf("Number is palindrome");
	  getch();
	  return 0;
	}
      printf("Number is not palindrome");
      getch();
   }

_____________________________________________________________

Input set : We can enter integer numbers from 0 up to 32,767.
Output : We will get to know if the entered number is palindrome or not.

Example 1,

Enter a number : 121
Number is palindrome
__________________________

Example 2,

Enter a number : 922
Number is not palindrome
