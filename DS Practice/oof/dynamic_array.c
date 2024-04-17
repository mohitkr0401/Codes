#include <stdio.h>

#include <stdlib.h>

int main()

{

    //*ptr will be storing the base

    // address of the array elements

    int *ptr;

    int size, i;

    // size of the array will be 5

    size = 5;

    printf("Size of the array is: %d\n", size);

    // allocating the array memory

    // dynamically using malloc()

    ptr = (int *)malloc(size * sizeof(int));

    // Checking whether the memory has

    // been successfully allocated by malloc

    if (ptr == NULL)

    {

        printf("Memory has not been allocated allocated\n");

        exit(0);
    }

    else

    {

        // Memory has been successfully allocated

        printf("Memory has been allocated successfully\n");

        // initializing the array elements

        for (i = 0; i < size; ++i)

        {

            ptr[i] = i + 1;
        }

        // Print the elements of the array

        printf("The elements of the array are: ");

        for (i = 0; i < size; ++i)

        {

            printf("%d ", ptr[i]);
        }
    }

    return 0;
}