/*Experiment no.14                                Date.21/10/2023
Title-Write a recursive program to test whether given number is prime.
Name of Programmer-Vishal Pravin Jatti		  Roll No.-26
*/
#include<stdio.h>
int isPrime(int,int);
int main()
 {
  int num;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  if(isPrime(num,2))
   {
    printf("%d is a prime number.",num);
   }
  else
   {
    printf("%d is not a prime number.",num);
   }
  getch();
  return 0;
 }
int isPrime(int n,int i)
 {
  if(n % i == 0) return 0;
  if(i>=n/2) return 1;
  else return isPrime(n,++i);
 }
/*Output:
Enter a number:17
17 is a prime number.
*/