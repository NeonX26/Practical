/*
Experiment No - 04
Title - Write a program to add digits of number using while statement.
Name of the programmer : Pratik Ghute.
*/

void main()
   {
      int num, sum=0;
      clrscr();
      printf("Enter a number : ");
      scanf("%d",&num);
      printf("The sum of digits of is %d",num);
      while(num)
	{
	  sum+=num%10;
	  num/=10;
	}
      printf("%d",sum);
      getch();
   }



_____________________________________________________

Input set : We can give input from 0 up to 32,767.
Output : We will get sum of all digits of the number.
(Negative values will give sum in negative)

For example,

Enter a number : 12345
The sum of digits of is 15
