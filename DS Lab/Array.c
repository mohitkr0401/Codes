#include <stdio.h>
#include <stdlib.h>

void insert(int arr[], int x, int size)
{
    for (int i = size; i > x - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    int temp;
    printf("Enter the Value to Insert\n");
    scanf("%d", &temp);
    arr[x - 1] = temp;
}

void delete(int arr[], int x, int size)
{
    for (int i = x; i < size; i++)
    {
        arr[i - 1] = arr[i];
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size = 0, m;
    int arr[50];

    while (1)
    {
        printf("select\n0 for Exit\n1 for Insert\n2 for Delete\n");
        scanf("%d", &m);

        switch (m)
        {
        case 0:
            exit(1);
            break;

        case 1:
            printf("Enter the Position at which to Insert\n");
            scanf("%d", &m);
            if (m <= size + 1 && m > 0)
            {
                insert(arr, m, size);
                size++;
                display(arr, size);
            }
            else
            {
                printf("Enter Position between 0 and %d\n\n", size + 2);
            }

            break;

        case 2:
            printf("Enter the Position at which to Delete\n");
            scanf("%d", &m);
            if (m <= size && m > 0)
            {
                delete (arr, m, size);
                size--;
                display(arr, size);
            }
            else
            {
                printf("Enter Position between 0 and %d\n\n", size + 1);
            }

            break;

        default:
            break;
        }
    }

    return 0;
}