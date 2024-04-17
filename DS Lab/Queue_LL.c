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

void enqueue()
{
    struct node *newnode;
    if (start == NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value\n");
        scanf("%d", &temp);
        newnode->data = temp;
        newnode->next = NULL;
        top = newnode;
        start = newnode;
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value\n");
        scanf("%d", &temp);
        newnode->data = temp;
        newnode->next = NULL;
        top->next = newnode;
        top = top->next;
    }
}

void dequeue()
{
    if (start != NULL)
    {
        start = start->next;
    }
    else
    {
        printf("Queue is Empty\n");
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
        printf("Select\n0 for Exit\n1 for Enqueue\n2 for Dequeue\n");
        scanf("%d", &temp);
        switch (temp)
        {
        case 0:
            goto end;
            break;
        case 1:
            enqueue();
            display();
            break;

        case 2:
            dequeue();
            display();
            break;

        default:
            break;
        }
    }
end:
    return 0;
}