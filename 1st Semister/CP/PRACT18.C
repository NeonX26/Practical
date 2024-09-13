/*Experiment no.18                              Date-  /11/2023
Title-Write a program to demonstrate bit fields in a structure
Name of programmer-Vishal Pravin Jatti               Roll no-26
*/
#include<stdio.h>
int main()
 {
   struct teacher
    {
      char name[40];
      unsigned int age: 8;
      unsigned int id : 6;
      unsigned int exp:7;
    }t;
   int x;
   clrscr();
   printf("Enter name of teacher : ");
   gets(t.name);
   printf("Enter id : ");
   scanf("%d",&x);
   t.id=x;
   printf("Enter age : ");
   scanf("%d",&x);
   t.age=x;
   printf("Enter years of experience : ");
   scanf("%d",&x);
   t.exp=x;
   printf("\nTEACHER DETAIL\n");
   printf("Teacher name : %s\n",t.name);
   printf("ID : %d\n",t.id);
   printf("Age : %d\n",t.age);
   printf("Experience : %d\n",t.exp);
   getch();
   return 0;
 }
/*
Output :
Enter name of teacher : Kartik
Enter id : 12
Enter age : 25
Enter years of experience : 4

TEACHER DETAIL
Teacher name : Kartik
ID : 12
Age : 25
Experience : 4
*/