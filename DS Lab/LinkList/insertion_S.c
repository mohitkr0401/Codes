#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void Display()
{
    struct node *ptr = head;
    while (ptr)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("null");
}

int insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

int main()
{

    int n, x;
    printf("Enter No. of Elements : ");
    scanf("%d", &n);

    while (n != 0)
    {
        scanf("%d", &x);
        insert(x);
        n--;
    }

    Display();
}