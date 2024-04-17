#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Function to generate random array for testing
void generateRandomArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100; // Random numbers between 0 and 99
    }
}

// Function to measure the time taken by selection sort
double measureTime(int arr[], int n) {
    clock_t start_time = clock();
    selectionSort(arr, n);
    clock_t end_time = clock();

    double sorting_time = double(end_time - start_time) / CLOCKS_PER_SEC * 1000000;
    return sorting_time;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Best Case: Already Sorted
    for (int i = 0; i < n; ++i) {
        arr[i] = i; // Sorted numbers from 0 to n-1
    }
    double best_case_time = measureTime(arr, n);

    // Average Case: Random Order
    generateRandomArray(arr, n);
    double average_case_time = measureTime(arr, n);

    // Worst Case: Reverse Order
    for (int i = 0; i < n; ++i) {
        arr[i] = n - i - 1; // Sorted in reverse order
    }
    double worst_case_time = measureTime(arr, n);

    cout << "Time taken for selection sort (Best Case): " << best_case_time << " microseconds" << endl;
    cout << "Time taken for selection sort (Average Case): " << average_case_time << " microseconds" << endl;
    cout << "Time taken for selection sort (Worst Case): " << worst_case_time << " microseconds" << endl;

    return 0;
}
