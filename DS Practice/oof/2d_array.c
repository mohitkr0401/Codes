#include <stdio.h>

int main()

{

    // declaring and initializing the 2-D array.

    // 2-D array with 5 rows and 2 columns.

    int x[5][2] = {{0, 1}, {2, 3}, {4, 5}, {6, 7}, {8, 9}};

    int i, j;

    // print the value of each array element.

    // outer loop- for rows.

    for (i = 0; i < 5; i++)

    {

        // inner loop- for columns.

        for (j = 0; j < 2; j++)

        {

            printf("Element at x[%d][%d] : ", i, j);

            printf("%d", x[i][j]);

            printf("\n");
        }
    }

    return 0;
}