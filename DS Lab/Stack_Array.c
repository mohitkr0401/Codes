#include <stdio.h>

int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top = -1;
    printf("\nEnter the size of stack: ");
    scanf("%d", &n);
    printf("\nStack using array");
    printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");

    do
    {
        printf("\nEnter the choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("\nExit");
            break;
        }
        default:
        {
            printf("\nPlease Enter a Valid Choice(1/2/3/4) ");
        }
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    if (top >= n - 1)
    {
        printf("\nStack is overflow");
    }
    else
    {
        printf("Enter a value: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\nstack is underflow");
    }
    else
    {
        printf("\nThe popped element is %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("\nThe elements in Stack\n");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
        printf("\nPress next choice");
    }
    else
    {
        printf("\nThe STACK is empty");
    }
}