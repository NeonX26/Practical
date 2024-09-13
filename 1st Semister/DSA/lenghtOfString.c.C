Write a program to find the length of string and print its reverse.

#include<stdio.h>
#include<string.h>

int main()
 {
    char st[10];
    int n, i;
    char *q;
    char *ps;
    clrscr();
    ps = st;
    q = ps;

    printf("Enter a string:");

    while ((*ps = getchar()) != '\n')
     {
	ps++;
     }

    n = ps - q;

    printf("\nLength of string=%d", n);

    --ps;

    printf("\nString in reverse order is:");

    for (i = 0; i < n; i++)
    {
	putchar(*ps);
	ps--;
    }

    printf("\n");
    getch();
    return 0;
}
