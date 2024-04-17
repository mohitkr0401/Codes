#include<stdio.h>
#include<stdlib.h>

void enqueue()
{
    if (rear==x)
    {
        printf("\nQueue is Full!!");
    }
            
    else
    {
        printf("nEnter No. %d ",j++);
        scanf("%d",&queue[rear++]);
    }
}


int main()
{
    int n=10, queue[n], ch=1, front=0, rear=0, i, j=1,x=n;
    printf("Queue using Array!");
    printf("\n1 Insertion \n2 Deletion \n3 Display \n4 Exit");
    while (ch)
    {
        printf("\nEnter the Choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            
            break;
        case 2:
            if (front==rear)
            {
                printf("\nEnter No. %d ",j++);
                scanf("%d",&queue[rear++]);
            }
            else
            {
                printf("\nDeleted Element is %d ",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are :\n");
            if (front==rear)
            {
                printf("\nQueue is Empty");
            }
            else
            {
                for (i=front; i < rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                
            }
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong Choice!!");
            break;
        }
    }
    return 0;
}