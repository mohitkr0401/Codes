#include <stdio.h>

int main()

{

    int i;

    // initialize an array.

    int my_array[10] = {11, 6, 10, 50, 32, 56, 15, 98, 43, 22};

    // input index where the element is to be inserted.

    int pos;

    printf("Enter the position: ");

    scanf("%d", &pos);

    // input the element to be inserted.

    int element;

    printf("Enter the element: ");

    scanf("%d", &element);

    if (pos > 10)

    {

        printf("Input is invalid !");
    }

    else

    {

        // right shifting array elements.

        for (i = 9; i >= pos - 1; i--)

            my_array[i + 1] = my_array[i];

        // insert the element at "pos".

        my_array[pos - 1] = element;

        printf("Array after insertion is:\n");

        // print array elements.

        for (i = 0; i <= 10; i++)

            printf("% d ", my_array[i]);
    }

    return 0;
}