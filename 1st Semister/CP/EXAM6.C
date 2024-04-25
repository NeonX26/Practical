#include<stdio.h>
#include<conio.h>
int main()
  {
    FILE *fp1,*fp2;
    char *string,ch;
    int len=0;
    clrscr();
    fp1=fopen("EXAM5.C","r");
    fp2=fopen("EXAM6.C","w");
    while((ch=getc(fp1))!=EOF)
      {
	putc(ch,fp2);
      }
    fclose(fp1);
    fclose(fp2);
    fp2=fopen("EXAM6.C","r");
    while((ch=getc(fp2))!=EOF)
      {
	printf("%c",ch);
      }
    fclose(fp2);
    getch();
    return 0;
  }