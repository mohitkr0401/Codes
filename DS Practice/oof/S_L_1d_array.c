#include <stdio.h>

int main()

{

    // declare the array

    int my_array[10] = {11, 6, 10, 50, 32, 56, 15, 98, 43, 22};

    int i, smallest, largest;

    // assign the value of first array element

    // to smallest and largest.

    smallest = largest = my_array[0];

    // traverse the array.

    for (i = 0; i < 10; i++)

    {

        // if current element is larger than largest,

        // then update the value of largest.

        if (my_array[i] > largest)

        {

            largest = my_array[i];
        }

        // if current element is smaller than smallest,

        // then update the value of smallest.

        if (my_array[i] < smallest)

        {

            smallest = my_array[i];
        }
    }

    // print the smallest and the largest element.

    printf("The smallest element in the array is: %d", smallest);

    printf("\nThe largest element in the array is: %d", largest);

    printf("\n\n");

    return 0;
}