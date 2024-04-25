#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fact(int num)
  {
    int i,fact=1;
    for(i=1;i<=num;i++)
      {
	fact*=i;
      }
    return fact;
  }
int isStrong(int num)
  {
    int tmp=num,num1=0;
    while(tmp)
      {
	num1+=fact(tmp%10);
	tmp/=10;
      }
    if(num==num1) return 1;
    return 0;
  }
int main(int argc,char* argv[])
  {
    int n,m,i;
    if(argc!=3)
      {
	printf("Invalid Number of arguments");
	return 0;
      }
    m=atoi(argv[1]);
    n=atoi(argv[2]);
    for(i=m;i<n;i++)
      {
	if(isStrong(i)) printf("%5d",i);
      }
    return 0;
  }