#include <iostream>
#include <ctime>
#include <climits>
using namespace std;

const int MAX = 100;

void matrixChainOrder(int p[], int n, int m[MAX][MAX], int s[MAX][MAX]) {
    for (int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 1; i <= n - len + 1; i++) {
            int j = i + len - 1;
            m[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}

void printParentheses(int s[MAX][MAX], int i, int j) {
    if (i == j) {
        cout << "A" << i;
    } else {
        cout << "(";
        printParentheses(s, i, s[i][j]);
        printParentheses(s, s[i][j] + 1, j);
        cout << ")";
    }
}

double measureTime(int p[], int n) {
    int m[MAX][MAX], s[MAX][MAX];

    double start, end, t;
    start = clock();

    matrixChainOrder(p, n, m, s);

    end = clock();
    t = (double)(end - start) / CLOCKS_PER_SEC;
    cout << "\nOptimal Parenthesization: ";
    printParentheses(s, 1, n);
    cout << endl;
    return t;
}

int main() {
    int n;
    cout << "Enter the number of matrices: ";
    cin >> n;

    int p[MAX]; // Array to store dimensions of matrices
    cout << "Enter the dimensions of matrices:\n";
    for (int i = 0; i <= n; i++) {
        cout << "Dimension " << i << ": ";
        cin >> p[i];
    }

    double sorting_time = measureTime(p, n);

    cout << "\nTime taken by program is " << sorting_time << " sec" << endl;

    return 0;
}
