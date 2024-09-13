/*
Experiment No - 03
Title - Write a program to print first n elements of fibonacci series.
Name of the programmer : Pratik Ghute.
*/

void main()
   {
      int no1=0,no2=1,no3,num,i;
      clrscr();
      printf("Fibonacci series upto which term?\n");
      scanf("%d",&num);
      if(num < 2)
	 {
	    printf("%d",no1);
	 }
      else
	 {
	    printf("%d %d ",no1,no2);
	 }
      for(i=2; i<num; i++)
	 {
	    no3=no1+no2;
	    printf("%d ",no3);
	    no1=no2;
	    no2=no3;
	 }
      getch();
   }

________________________________________________________________________

Input set : We can enter integer numbers from 1 to 24 for input as term of fibonacci series.
Output : We will get Fibonacci series from 1st term upto given term.

For example,

Fibonacci series upto which term?
24
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657          