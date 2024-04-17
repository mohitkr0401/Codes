#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

// Function to perform binary search
int binarySearch(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if the key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key is greater, ignore the left half
        if (arr[mid] < key)
            left = mid + 1;

        // If key is smaller, ignore the right half
        else
            right = mid - 1;
    }

    return -1; // Key not found
}

double measureTime(int arr[], int size, int key, int num_trials) {
    clock_t total_time = 0;

    for (int i = 0; i < num_trials; ++i) {
        clock_t start_time = clock();
        binarySearch(arr, size, key);
        clock_t end_time = clock();

        total_time += (end_time - start_time);
    }

    double average_time = double(total_time) / num_trials / CLOCKS_PER_SEC * 1000000;
    return average_time;
}

int main() {
    int array_size;
    cout << "Enter the size of the array: ";
    cin >> array_size;

    int arr[array_size];

    // Fill the array with sorted numbers
    for (int j = 0; j < array_size; ++j) {
        arr[j] = j; // Sorted numbers from 0 to array_size-1
    }

    int best_case_key = arr[array_size / 2];
    int average_case_key = arr[0];
    int worst_case_key = array_size * 2 + 1; // Key not present in the array

    // Measure time for best case
    double best_case_time = measureTime(arr, array_size, best_case_key, 10000);
    cout << "Best Case (size " << array_size << "): " << best_case_time << " microseconds" << endl;

    // Measure time for average case
    double average_case_time = measureTime(arr, array_size, average_case_key, 10000);
    cout << "Average Case (size " << array_size << "): " << average_case_time << " microseconds" << endl;

    // Measure time for worst case
    double worst_case_time = measureTime(arr, array_size, worst_case_key, 10000);
    cout << "Worst Case (size " << array_size << "): " << worst_case_time << " microseconds" << endl;
    cout << "Mohit Kumar\n04076803121\nIT-3";
    return 0;
}
