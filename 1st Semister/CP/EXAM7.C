#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
  {
    FILE *fp;
    int no,i;
    clrscr();
    fp=fopen("file2.txt","w");
    for(i=0;i<10;i++)
      {
	no=random(1000);
	fprintf(fp,"%5d",no);
      }
    fclose(fp);
    fp=fopen("file2.txt","r");
    for(i=0;i<10;i++)
      {
	fscanf(fp,"%d",&no);
	printf("%5d",no);
      }
    fclose(fp);
    getch();
    return 0;
  }