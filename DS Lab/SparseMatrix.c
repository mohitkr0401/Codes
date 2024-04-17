#include <stdio.h>
#define Max 20

//void read_matrix(int a[10][10], int row, int col);
void print_sparse(int b[Max][3]);
void create_sparse(int a[10][10], int row, int col, int b[Max][3]);
int main()
{
    int a[10][10], b[Max][3], row, col;
    int i, j;
    int count = 0;
    printf("\n Enter the size of Matrix(Rows,Columns): ");
    scanf("%d %d", &row, &col);

    printf("\n Enter Elements of Matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                ++count;
            }
        }
    }
    if (count > (row * col) / 2)
    {
        printf("The given matrix is a sparse matrix\n");
        create_sparse(a, row, col, b);
        print_sparse(b);
    }
    else
    {
        printf("The given matrix is not a sparse matrix.\n");
    }
    printf("There are %d number of zeroes", count);
    return 0;
}

void create_sparse(int a[10][10], int row, int col, int b[Max][3])
{
    int i, j, k;
    k = 1;
    b[0][0] = row;
    b[0][1] = col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }
        b[0][2] = k - 1;
    }
}
void print_sparse(int b[Max][3])
{
    int i, col;
    col = b[0][2];
    printf("\nSparse form-list of 3 triples\n\n");
    for (i = 0; i <= col; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
}