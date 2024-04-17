#include <stdio.h>
int main()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the Number of Rows (Between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the Number of Columns (Between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter Elements of 1st Matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter Element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter Elements of 2nd Matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter Element b%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // adding two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // printing the result
    printf("\nSum of Two Matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
    printf("Mohit Kumar\n04076803121");
    return 0;
}