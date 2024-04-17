#include <iostream>
#include <ctime>
using namespace std;

const int MAX = 100;

int matrixChainOrder(int p[], int i, int j) {
    if (i == j) {
        return 0;
    }

    int minCost = INT_MAX;

    for (int k = i; k < j; k++) {
        int cost = matrixChainOrder(p, i, k) + matrixChainOrder(p, k + 1, j) + p[i - 1] * p[k] * p[j];
        if (cost < minCost) {
            minCost = cost;
        }
    }

    return minCost;
}

double measureTime(int p[], int n) {
    double start, end, t;
    start = clock();

    int optimalCost = matrixChainOrder(p, 1, n);

    end = clock();
    t = (double)(end - start) / CLOCKS_PER_SEC;

    cout << "Optimal Cost: " << optimalCost << endl;
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
