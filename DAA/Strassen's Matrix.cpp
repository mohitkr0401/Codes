#include <iostream>
#include <ctime>

using namespace std;

// Function to multiply two 2x2 matrices using Strassen's algorithm
void multiply(int A[2][2], int B[2][2], int C[2][2]) {
    int P1 = A[0][0] * (B[0][1] - B[1][1]);
    int P2 = (A[0][0] + A[0][1]) * B[1][1];
    int P3 = (A[1][0] + A[1][1]) * B[0][0];
    int P4 = A[1][1] * (B[1][0] - B[0][0]);
    int P5 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int P6 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    int P7 = (A[1][0] - A[0][0]) * (B[0][0] + B[0][1]);

    C[0][0] = P5 + P4 - P2 + P6;
    C[0][1] = P1 + P2;
    C[1][0] = P3 + P4;
    C[1][1] = P5 + P1 - P3 - P7;
}

// Function to get the matrix from the user
void getMatrix(int A[2][2], const char* matrixName) {
    cout << "Enter elements of matrix " << matrixName << ":" << endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> A[i][j];
        }
    }
}

// Function to measure the time taken by matrix multiplication
double measureTime(int A[2][2], int B[2][2], int C[2][2]) {
    clock_t start_time = clock();
    multiply(A, B, C);
    clock_t end_time = clock();

    double multiplication_time = double(end_time - start_time) / CLOCKS_PER_SEC * 1000000;
    return multiplication_time;
}

// Function to print a 2x2 matrix
void printMatrix(int A[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[2][2], B[2][2], C[2][2];

    getMatrix(A, "A");
    getMatrix(B, "B");

    // Measure time for matrix multiplication
    double multiplication_time = measureTime(A, B, C);

    // Output the result matrix and time taken
    cout << "\nResultant matrix C:" << endl;
    printMatrix(C);

    cout << "\nTime taken for matrix multiplication: " << multiplication_time << " microseconds" << endl;

    return 0;
}