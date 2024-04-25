/* Experiment No.13                             date.19/10/23
Title-Write a program to demonstrate call by reference parameter
passing technique.
Name of a Programmer-Vishal Pravin Jatti.	Roll No.-26
*/
#include<stdio.h>
void asc(int *no1,int *no2, int *no3)
 {
  int sml,mid,lar;
  sml=lar=*no1;
  if(sml>*no2) sml=*no2;
  if(sml>*no3) sml=*no3;
  if(lar<*no2) lar=*no2;
  if(lar<*no3) lar=*no3;
  mid = *no1 + *no2 + *no3 - sml - lar;
  *no1=sml;
  *no2=mid;
  *no3=lar;
 }
void main()
 {
  int num1,num2,num3;
  clrscr();
  printf("Enter three number:");
  scanf("%d%d%d",&num1,&num2,&num3);
  asc(&num1,&num2,&num3);
  printf("sorted numbers are:");
  printf("%d %d %d",num1,num2,num3);
  getch();
 }

/* Output:
Enter three number:698 48 68
sorted numbers are:48 68 698
*/