/*
Experiment No - 02
Title - Write a program to find smallest of 3 numbers
using nested if statements.
Name of the programmer : Pratik Ghute.
*/

void main()
   {
      int no1,no2,no3;
      clrscr();
      printf("Enter three numbers \n");
      scanf("%d%d%d",&no1,&no2,&no3);
      if(no1 < no2)
	 {
	    if(no1 < no3)
	       {
		  printf("%d is smallest",no1);
	       }
	    else
	       {
		  printf("%d is smallest",no3);
	       }
	 }
      else
	 {
	    if(no2 < no3)
	       {
		  printf("%d is smallest",no2);
	       }
	    else
	       {
		  printf("%d is smallest",no3);
	       }
	 }
      getch();
   }







______________________________________________________________________

Input set : We can enter 3 integer numbers from -32,768 up to 32,767.
Output : We will get smallest among 3 numbers.

For example,

Enter three numbers
1234 3214 -120
-120 is smallest