#include <stdio.h>

int main()

{

    int i, element;

    // initialize an array.

    int my_array[10] = {11, 6, 10, 50, 32, 56, 15, 98, 43, 22};

    printf("Enter element to be searched:\n");

    // input element to be searched.

    scanf("%d", &element);

    // traverse the array to search the element.

    for (i = 0; i <= 9; i++)

    {

        if (my_array[i] == element)

        {

            // print the index at which

            // the element is found.

            printf("Element found at index %d", i);

            break;
        }
    }

    // if the element is not found.

    if (i == 10)

    {

        printf("\nElement not found!");
    }

    return 0;
}