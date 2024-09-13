/*
Experiment No - 07
Title - Write a program to check whether the
given number is an armstrong number or not, using goto statement.
*/

void main()
   {
      int num1,tmp,num2=0,rem;
      clrscr();
      printf("Enter a number : ");
      scanf("%d",&num1);
      tmp=num1;
      label:
      rem = tmp % 10;
      num2 = num2 + rem * rem * rem;
      tmp = tmp / 10;
      if(tmp > 0) goto label;
      if(num1 == num2)
	{
	  printf("Number is an armstrong number");
	  getch();
	  return 0;
	}
      printf("Number is not an armstrong number");
      getch();
   }

______________________________________________________________

Input set : We can give input from 0 up to 32,767.
Output : We will get to know whether the given number is armstrong or not.

Example 1,

Enter a number : 153
Number is an armstrong number
_____________________________________

Example 2,

Enter a number : 127
Number is not an armstrong number