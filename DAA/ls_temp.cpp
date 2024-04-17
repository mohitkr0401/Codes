#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key)
            return i;  // Key found, return index
    }
    return -1;  // Key not found
}

double measureTime(int arr[], int size, int key, int num_trials) {
    clock_t total_time = 0;

    for (int i = 0; i < num_trials; ++i) {
        clock_t start_time = clock();
        linearSearch(arr, size, key);
        clock_t end_time = clock();

        total_time += (end_time - start_time);
    }

    double average_time = double(total_time) / num_trials / CLOCKS_PER_SEC * 1000000;
    return average_time;
}

int main() {
    //srand(time(0));  // Seed for random number generation

    int array_size;
    cout << "Enter the size of the array: ";
    cin >> array_size;

    int arr[array_size];

    // Fill the array with random numbers
    for (int j = 0; j < array_size; ++j) {
        arr[j] = rand() % array_size;  // Random numbers between 0 and array_size-1
    }

    int best_case_key = arr[0];
    int average_case_key = arr[array_size / 2];
    int worst_case_key = array_size + 1;

    // Measure time for best case
    double best_case_time = measureTime(arr, array_size, best_case_key, 1000);
    cout << "Best case (size " << array_size << "): " << best_case_time << " microseconds" << endl;

    // Measure time for average case
    double average_case_time = measureTime(arr, array_size, average_case_key, 1000);
    cout << "Average case (size " << array_size << "): " << average_case_time << " microseconds" << endl;

    // Measure time for worst case
    double worst_case_time = measureTime(arr, array_size, worst_case_key, 1000);
    cout << "Worst case (size " << array_size << "): " << worst_case_time << " microseconds" << endl;
    cout << "Mohit Kumar\n04076803121\nIT-3";
    return 0;
    
}
