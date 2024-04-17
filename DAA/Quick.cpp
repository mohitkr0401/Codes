#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <random>

using namespace std;

// Function to partition the array into two halves
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to perform the quicksort algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to measure the time taken by quicksort
double measureTime(int arr[], int size) {
    clock_t start_time = clock();
    quickSort(arr, 0, size - 1);
    clock_t end_time = clock();

    double sorting_time = double(end_time - start_time) / CLOCKS_PER_SEC * 1000000;
    return sorting_time;
}

int main() {
    int array_size;
    cout << "Enter the size of the array: ";
    cin >> array_size;

    int arr[array_size];

    // Fill the array with random numbers
    for (int j = 0; j < array_size; ++j) {
        arr[j] = rand() % 100; // Random numbers between 0 and 99
    }

    // Measure the time taken for quicksort for best case (already sorted array)
    double best_case_time = measureTime(arr, array_size);

    // // Shuffle the array for average case
    // random_device rd;
    // mt19937 g(rd());
    // shuffle(arr, arr + array_size, g);

    // Measure the time taken for quicksort for average case
    double average_case_time = measureTime(arr, array_size);

    // Reverse the array for worst case
    reverse(arr, arr + array_size);

    // Measure the time taken for quicksort for worst case
    double worst_case_time = measureTime(arr, array_size);

    // Display the time complexities for best, average, and worst cases
    cout << "Time complexity for quicksort (Best Case): " << best_case_time << " microseconds" << endl;
    cout << "Time complexity for quicksort (Average Case): " << average_case_time << " microseconds" << endl;
    cout << "Time complexity for quicksort (Worst Case): " << worst_case_time << " microseconds" << endl;

    return 0;
}

