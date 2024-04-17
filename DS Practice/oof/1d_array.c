#include <stdio.h>

int main()

{

    // declare an array.

    int my_array[6];

    printf("Enter array elements:\n");

    // input array elements.

    int i;

    for (i = 0; i < 6; i++)

    {

        scanf("%d", &my_array[i]);
    }

    printf("\nArray elements are:\n");

    // print array elements.

    for (i = 0; i <= 5; i++)

    {

        printf("%d ", my_array[i]);
    }

    return 0;
}