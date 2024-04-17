#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter 10 Numbers:\n");
    int arr[10], i, max, min;
    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i]==0)
        {
            max=min=arr[i];
        }
        
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("The Largest Number Entered is: %d\n", max);
    printf("The Smallest Number Entered is: %d",min);
    getch();
    return 0;
}