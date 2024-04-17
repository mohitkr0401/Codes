#include <stdio.h>
#include <stdlib.h>
int key;
int binary(int a[], int low, int high);
int linear(int a[], int n);
int main()
{
    int n, i, a[10], pos, ch;
    do
    {
        printf("\n-------Menu--------\n1.Binary Search\n2.Linear Search\n3.Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter how many Elements: ");
            scanf("%d", &n);
            printf("\nEnter Elements of Array\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            printf("\nEnter the Elements to be Searched : ");
            scanf("%d", &key);
            pos = linear(a, n);
            if (pos == -1)
                printf("\nElement Not Found!!");
            else
                printf("\nElement found at Position %d", pos + 1);
            break;
        case 2:
            printf("\nEnter How Many Elements: ");
            scanf("%d", &n);
            printf("\nEnter Elements of Array\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
            printf("\nEnter the Elements to be Searched : ");
            scanf("%d", &key);
            pos = binary(a, 0, n - 1);
            if (pos == -1)
                printf("\nElement Not Found!!");
            else
                printf("\nElement Found at Position %d", pos + 1);
            break;

        case 3:
            exit(0);
            break;

        default:
            printf("\nInvalid Choice!!");
            break;
        }
    } while (ch != 3);
}
int binary(int a[], int low, int high)
{
    int mid;

    if (low > high)
    {
        return (-1);
    }
    mid = (low + high) / 2;
    if (key == a[mid])
    {
        return (mid);
    }
    if (key < a[mid])
    {
        return (binary(a, low, mid - 1));
    }
    else
    {
        return (binary(a, mid + 1, high));
    }
}

int linear(int a[], int n)
{
    int i;
    for (i = 0; i < n + 1; i++)
    {
        if (a[i] == key)
            return (i);
    }
    return (-1);
}