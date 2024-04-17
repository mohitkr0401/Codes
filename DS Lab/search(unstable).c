#include <stdio.h>
#include <stdlib.h>
int binary(int a[],int low,int high);
int linear(int a[],int n);
int main()
{
    int arr[50], n, i, ch,pos;
    printf("Enter Total Number of Elements : ");
    scanf("%d", &n);
    printf("Enter the Elements in Sorted Form\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Elements are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    while (ch != 4)
    {
        printf("1. Linear Search\n2. Binary Search\n3. Exit");
        printf("Enter Your Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            linear(arr[50],n);
            break;
        case 2:
            binary();
            break;
        case 3:
            exit(0);
            break;
        default :
            printf("Enter Valid Choice!\n");
        }
    }
}
int linear(int arr[],int n)
{
    int i,s;
    printf("Enter the Element to be Searched : ");
    scanf("%d",&s);
    for ( i = 0; i < n; i++)
    {
        if (s==arr[i])
        {
            printf("Element Found!!");
            break;
        }
    }
    if(i==n);
    {
        printf("Element not Found!!");
    }
    
    
}