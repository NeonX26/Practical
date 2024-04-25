Write a program for implementation stack operation on stack. 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  // Add this for the exit() function
#define maxsize 10

struct stack
{
    int top;
    int item[maxsize];
};

void push(struct stack *p, int x);
int pop(struct stack *ps);
void showstack(struct stack *ps);

int main()
{
    int choice, ele, *i;
    struct stack s;  // Declare an instance of the stack
    s.top = -1;

    printf("Available choices are:\nChoice 1: PUSH\nChoice 2: POP\nChoice 3: Display stack\nChoice 4: Exit\n");

    while (choice != 4)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nEnter the element to be inserted: ");
            scanf("%d", &ele);
            push(&s, ele);
        }
        else if (choice == 2)
        {
            *i = pop(&s);
            printf("\nThe deleted item is: %d\n", *i);
        }
        else if (choice == 3)
        {
            showstack(&s);
        }
        else if (choice == 4)
        {
            exit(0);
        }
    }

    getch();
    return 0;
}

void push(struct stack *ps, int x)
{
    ps->top++;
    ps->item[ps->top] = x;
}

int pop(struct stack *ps)
{
    int y;
    y = ps->item[ps->top];
    ps->top--;
    return y;
}

void showstack(struct stack *ps)
{
    int i;
    if (ps->top == -1)
    {
        printf("Stack is empty...\n");
    }
    else
    {
        printf("Elements of stack:\n");
        for (i = ps->top; i >= 0; i--)
        {
            printf("%d\n", ps->item[i]);
        }
    }
}
