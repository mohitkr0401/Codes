#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

void optimal_bst(float a[], int n);
void printTables(int n);
double measureTime(float a[], int n);

float P[50], C[50][50], B[50][50];
void optimal_bst(float a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        C[i][i - 1] = 0;
        C[i][i] = a[i];
        B[i][i] = i;
    }

    for (int l = 2; l <= n; l++)
    {
        for (int i = 1; i <= n - l + 1; i++)
        {
            int j = i + l - 1;
            C[i][j] = 9999;
            float sum = 0;
            for (int x = i; x <= j; x++)
            {
                sum = sum + a[x];
            }
            for (int r = i; r <= j; r++)
            {
                float m = (C[i][r - 1] + C[r + 1][j] + sum);
                if (m < C[i][j])
                {
                    C[i][j] = m;
                    B[i][j] = r;
                }
            }
        }
    }

    printTables(n);
}

void printTables(int n)
{
    cout << "\nMinimum cost will be:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        for (int j = 0; j <= n; j++)
        {
            cout << C[i][j] << " ";
        }
    }

    cout << "\nThe node at which the minimum cost is there:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        for (int j = 0; j <= n; j++)
        {
            cout << B[i][j] << " ";
        }
    }
}

double measureTime(float a[], int n)
{
    clock_t start, end;
    start = clock();
    optimal_bst(a, n);
    end = clock();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC * 1000000;
    return elapsed_time;
}
int main()
{
    int n;

    cout << "Enter the number of nodes required: ";
    cin >> n;

    cout << "Enter the demand values required: ";
    for (int i = 1; i <= n; i++)
    {
        cin >> P[i];
    }

    double sorting_time = measureTime(P, n);

    cout << "\nThe time required by the program is " << sorting_time << " microseconds";
}