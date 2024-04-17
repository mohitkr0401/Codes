#include <iostream>
#include <time.h>

using namespace std;

void binary_search(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            break;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
}

double time_calc(int arr[], int size, int target)
{
    clock_t T = clock();
    binary_search(arr, size, target);
    T = clock() - T;
    double time_elapsed = double(T) / CLOCKS_PER_SEC;
    return time_elapsed;
}

int main()
{
    int array_size;
    cout << "Enter the Size of the Array: ";
    cin >> array_size;

    int array[array_size];
    for (int i = 0; i < array_size; ++i)
    {
        array[i] = i; // Sorted array for best case
    }
    // Test binary search for each case
    cout << "Binary Search Time Complexity Analysis:" << endl;
    cout << "Array Size: " << array_size << endl;
    double best_case_time = time_calc(array, array_size, 0);
    cout << "Time taken for Best Case: " << best_case_time << " seconds" << endl;
    double avg_case_time = time_calc(array, array_size, array_size / 2);
    cout << "Time taken for Average Case: " << avg_case_time << " seconds" << endl;
    double worst_case_time = time_calc(array, array_size, array_size);
    cout << "Time taken for Worst Case: " << worst_case_time << " seconds" << endl;
    cout << "Mohit Kumar 04076803121";
    return 0;
}
