#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int isPrime(int num,int t)
  {
    if(num<2) return 0;
    if(t<=num/2)
    {
      if(num%t==0) return 0;
      else return isPrime(num,t+1);
    }
    return 1;
  }
int isPalindrome(int num)
  {
    int rev=0,tmp=num;
    while(tmp)
      {
	rev=rev*10+(tmp%10),tmp=tmp/10;
      }
    if(rev==num) return 1;
    return 0;
  }
int isArmstrong(int num)
  {
    int nnum=0,tmp=num,rem;
    while(tmp)
      {
	rem=tmp%10;
	nnum=nnum+rem*rem*rem;
	tmp/=10;
      }
    if(nnum==num) return 1;
    return 0;
  }
void loop(int i)
  {
    if(i<=500)
    {
      if(isArmstrong(i)) printf("%5d",i);
      loop(i+1);
    }
  }
int main()
  {
    int i,j;
    clrscr();
    loop(1);
    getch();
    return 0;
  }