#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
  {
    FILE *fp;
    int no,i;
    clrscr();
    randomize();
    fp=fopen("int1.txt","wb");
    for(i=0;i<10;i++)
      {
	no=random(100);
	putw(no,fp);
      }
    fclose(fp);
    fp=fopen("int1.txt","rb");
    for(i=0;i<10;i++)
      {
	no=getw(fp);
	printf("%5d",no);
      }
    fclose(fp);
    getch();
    return 0;
  }