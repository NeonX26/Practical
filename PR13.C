/*
Experiment No - 13                     Date19/10/2023.
Title - Write a Program to demonstrate call by
reference parameter passing technique
Name of programmer-Pratik Ghute       Roll No-MC23F14F018.
*/
#include<stdio.h>
#include<conio.h>
void asc(int  *no1, int *no2, int *no3)
 {
   int sml, lrg, mid;
   sml=lrg=*no1;
   if(sml > *no2) sml=*no2;
   if(sml > *no3) sml=*no3;
   if(lrg < *no2) lrg=*no2;
   if(lrg < *no3) lrg=*no3;
   mid=*no1+*no2+*no3-(sml+lrg);
   *no1=sml;
   *no2=mid;
   *no3=lrg;
 }
 void main()
 {
    int n1,n2,n3;
    clrscr();
    printf("Enter three Integrs numbers:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    asc(&n1,&n2,&n3);
    printf("Sorted Integers Number are:");
    printf("%d %d %d",n1,n2,n3);
    getch();
 }

/*
Output:
Enter three Integrs numbers:
33 26 78
Sorted Integers Number are:26 33 78
*/
