/*Program No - 19
Title - Write a program to check if the number is automorphic or not.
Name of the programmer : Pratik Ghute (MC23F14F020)
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
  {
    int num, sq, dig, tmp, cnt=0;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&num);
    tmp=num;
    sq=num * num;
    while(tmp)
      {
	cnt++;
	tmp/=10;
      }
    dig=(int)pow(10,cnt);
    if(num == (sq%dig))
      {
	printf("%d is an automorphic number ",num);
      }
    else
      {
	printf("%d is not automorphic number ",num);
      }
    getch();
  }

/*
Output:
Enter a number : 25
25 is an automorphic number

Enter a number : 31
31 is not automorphic number
*/