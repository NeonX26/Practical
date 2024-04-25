/* Experiment No-19                              Date -  /11/2023
Title-Write a program to copy contents of one file into another file
Name of Programmer - Vishal Pravin Jatti             Roll no - 26
*/
#include<stdio.h>
int main()
 {
   FILE *fptr1,*fptr2;
   char c;
   clrscr();
   fptr1=fopen("file1.txt","r");
   if(fptr1==NULL)
     {
	printf("Error");
	exit(1);
     }
   fptr2=fopen("file2.txt","w");
   if(fptr2==NULL)
     {
	printf("Error");
	exit(1);
     }
   while((c=getc(fptr1))!=EOF)
     {
	putc(c,fptr2);
     }
   printf("file 1 content Copied Successfully in file 2");
   fclose(fptr1);
   fclose(fptr2);
   getch();
   return 0;
 }
/*
Output :
file 1 content Copied Successfully in file 2
*/