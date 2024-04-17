#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
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

// Function to measure the time taken by insertion sort
double measureTime(int arr[], int n) {
    clock_t start_time = clock();
    insertionSort(arr, n);
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

    cout << "Time taken for insertion sort (Best Case): " << best_case_time << " microseconds" << endl;
    cout << "Time taken for insertion sort (Average Case): " << average_case_time << " microseconds" << endl;
    cout << "Time taken for insertion sort (Worst Case): " << worst_case_time << " microseconds" << endl;

    return 0;
}
