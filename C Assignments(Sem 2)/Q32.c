#include <stdio.h>
#include <conio.h>
int main()
{
    int nbr, i, r, arr[30];
    printf("Enter the Number of Elements in the Array: ");
    scanf("%d", &nbr);
    printf("Enter the Array Elements:\n");
    for (i = 0; i < nbr; i++)
        scanf("%d", &arr[i]);
    printf("Enter the Item to be Searched: ");
    scanf("%d", &r);
    i = 0;
    while (i < nbr && r != arr[i])
        i++;

    if (i < nbr)
        printf("The Element is Found at the Position = %d", i + 1);
    else
        printf("Element Not Found!!");
    getch();
    return 0;
}