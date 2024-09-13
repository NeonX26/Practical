/*
Experiment No - 17			Date:31/10/2023
Title - Write a program demonstrate nested structure
Name of the programmer - Pratik Ghute   MC23F14F018
*/
#include<stdio.h>
#include<conio.h>
struct employee
  {
    int empid;
    char name[40];
    struct addinfo
      {
	int salary;
	int bonus;
	char dept[40];
      }addinfo1;
  }emp[5];
int main()
  {
    int i;
    clrscr();
    for(i=0;i<5;i++)
      {
	printf("Enter Name : ");
	scanf("%s",&emp[i].name);
	fflush(stdin);
	printf("Enter employee id : ");
	scanf("%d",&emp[i].empid);
	fflush(stdin);
	printf("Enter the salary of the employee : ");
	scanf("%d",&emp[i].addinfo1.salary);
	fflush(stdin);
	printf("Enter bonus of the employee : ");
	scanf("%d",&emp[i].addinfo1.bonus);
	fflush(stdin);
	printf("Enter the department of the employee : ");
	scanf("%s",&emp[i].addinfo1.dept);
      }
    clrscr();
    printf("\nAll Employees\n");
    for(i=0;i<5;i++)
      {
	printf("\n=============================\n");
	printf("Emp Id 			     : %d\n",emp[i].empid);
	printf("Name 			     : %s\n",emp[i].name);
	printf("Department		     : %s\n",emp[i].addinfo1.dept);
	printf("Total salary of the employee : %d",emp[i].addinfo1.salary+emp[i].addinfo1.bonus);
      }
    getch();
  }
/*
Output:
=============================
Emp Id                       : 101
Name                         : Sandeep
Department                   : HR
Total salary of the employee : 10500
=============================
Emp Id                       : 102
Name                         : Ganesh
Department                   : IT
Total salary of the employee : 10000
=============================
Emp Id                       : 103
Name                         : Nayan
Department                   : Marketing
Total salary of the employee : 10000
=============================
Emp Id                       : 104
Name                         : Tushar
Department                   : IT
Total salary of the employee : -24040
=============================
Emp Id                       : 105
Name                         : Vishal
Department                   : IT
Total salary of the employee : 10000
*/