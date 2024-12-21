#include <stdio.h>

int main()

{

    int i, j, temp;

    // initialize an array.

    int my_array[10] = {11, 6, 10, 50, 32, 56, 15, 98, 43, 22};

    // print unsorted array.

    printf("Original array is: \n");

    for (i = 0; i < 10; i++)

    {

        printf("%d ", my_array[i]);
    }

    // sort the array elements in descending order.

    for (i = 0; i < 10; i++)

    {

        for (j = i + 1; j < 10; j++)

        {

            if (my_array[j] > my_array[i])

            {

                temp = my_array[i];

                my_array[i] = my_array[j];

                my_array[j] = temp;
            }
        }
    }

    // print the sorted elements.

    printf("\n\nSorted array in descending order is: \n");

    for (i = 0; i < 10; i++)

    {

        printf("%d ", my_array[i]);
    }

    return 0;
}