#include <iostream>
#include <ctime>
using namespace std;

const int MAX = 100;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lcs(char X[], char Y[], int m, int n) {
    int L[MAX][MAX];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                L[i][j] = 0;
            } else if (X[i - 1] == Y[j - 1]) {
                L[i][j] = L[i - 1][j - 1] + 1;
            } else {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }

    return L[m][n];
}

double measureTime(char X[], char Y[], int m, int n) {
    double start, end, t;
    start = clock();

    int length = lcs(X, Y, m, n);

    end = clock();
    t = (double)(end - start) / CLOCKS_PER_SEC;

    cout << "Length of Longest Common Subsequence: " << length << endl;
    return t;
}

int main() {
    char X[MAX], Y[MAX];
    int m, n;

    cout << "Enter the first string: ";
    cin >> X;
    m = strlen(X);

    cout << "Enter the second string: ";
    cin >> Y;
    n = strlen(Y);

    double sorting_time = measureTime(X, Y, m, n);

    cout << "\nTime taken by program is " << sorting_time << " sec" << endl;

    return 0;
}
