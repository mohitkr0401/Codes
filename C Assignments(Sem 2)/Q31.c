#include <stdio.h>
#include <conio.h>
#define MAX 5
void bubble_sort(int arr[]);
int main()
{
    int arr[MAX];
    for (int i = 0; i < MAX; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nUnsorted Array: \n");
    for (int i = 0; i < MAX; i++)
        printf("%d ", arr[i]);
    bubble_sort(arr);
    printf("\n\nSorted Array in Ascending Order: \n");
    for (int i = 0; i < MAX; i++)
        printf("%d ", arr[i]);
    getch();
    return 0;
}
void bubble_sort(int arr[])
{
    int tmp,
        is_swapped;

    for (int i = 0; i < MAX; i++)
    {
        is_swapped = 0;
        for (int j = 0; j < MAX - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                is_swapped = 1;
            }
        }
        if (!is_swapped)
            break;
    }
}