/* Experiment No - 15                     Date21/10/2023.
Title - Write a program to display strong number form
n to m by passing argument from command line.
Name of programmer - Pratik Ghute  Roll No-MC23F14F018.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fact(int);
int isstrong(int);
int main(int argc, char *argv[])
  {
    int m, n, sum,i,tmp;
    if(argc != 3)
      {
	printf("Invalid number of arguments\n");
	return 0;
      }
    m = atoi(argv[1]);
    n = atoi(argv[2]);
    printf("Strong numbers between %d and %d are:\n",m,n);
    for(i=m;i<=n;i++)
      {
	if(isstrong(i))
	  {
	    printf("%5d is a strong number\n",i);
	  }
      }
    getch();
    return 0;
  }
int fact(int num)
  {
    int fact=1,i;
    for(i=1;i<=num;i++)
      {
	fact *= i;
      }
    return fact;
  }
int isstrong(int num)
  {
	int sum = 0,tmp;
	sum=0;
	tmp=num;
	while(tmp)
	  {
	    sum = sum + fact(tmp%10);
	    tmp = tmp/10;
	  }
	if(sum == num)
	  {
	    return 1;
	  }
	return 0;
  }
/*
Output:

C:\TURBOC3\SOURCE>PR15 1 200
Strong numbers between 1 and 200 are:
    1 is a strong number
    2 is a strong number
  145 is a strong number

C:\TURBOC3\SOURCE>exit
*/