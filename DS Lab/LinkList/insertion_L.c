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

void insert(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (head==NULL)
    {
        head=new_node;
        return;
    }
    
    struct node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = new_node;
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