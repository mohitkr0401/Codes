#include <stdio.h>

int main()

{

    // declaring the array of size 20

    int my_array[20];

    // initialising the array elements

    for (int i = 0; i < 20; i++)

    {

        // i will be the value of e

        // very ith element of the array

        my_array[i] = i;
    }

    // Print value at index 5 of the array

    printf("Element at index 5"

           " is %d\n",

           my_array[5]);

    // Print value at index 13 of the array

    printf("Element at index 13"

           " is %d\n",

           my_array[13]);

    // Print value at index 21 of the array

    printf("Element at index 21"

           " is %d",

           my_array[21]);

    return 0;
}