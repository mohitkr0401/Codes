#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *ptr;
struct node *top;
int temp;

void push()
{
    struct node *newnode;
    if (start == NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the value\n");
        scanf("%d", &temp);
        newnode->data = temp;
        newnode->next = NULL;
        top = newnode;
        start = newnode;
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the value\n");
        scanf("%d", &temp);
        newnode->data = temp;
        newnode->next = NULL;
        top->next = newnode;
        top = top->next;
    }
}

void pop()
{
    if (start != NULL)
    {
        ptr = start;
        while (ptr->next != top)
        {
            ptr = ptr->next;
        }
        top = ptr;
        ptr->next = NULL;
    }
    else
    {
        printf("stack is empty\n");
    }
}

void display()
{
    ptr = start;
    printf("%d ", ptr->data);
    while (ptr->next)
    {
        ptr = ptr->next;
        printf("%d ", ptr->data);
    }
    printf("\n");
}
int main()
{
    while (true)
    {
        printf("Select\n0 for Exit\n1 for Push\n2 for Pop\n");
        scanf("%d", &temp);
        switch (temp)
        {
        case 0:
            goto end;
            break;
        case 1:
            push();
            display();
            break;

        case 2:
            pop();
            display();
            break;

        default:
            break;
        }
    }

end:

    return 0;
}