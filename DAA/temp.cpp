#include <iostream>
#include <chrono>

using namespace std;

void linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == target)
        {
            break;
        }
    }
}

double time_calc(int arr[], int size, int target)
{
    auto start_time = chrono::high_resolution_clock::now();
    linear_search(arr, size, target);
    auto end_time = chrono::high_resolution_clock::now();

    double time_elapsed = chrono::duration<double, std::milli>(end_time - start_time).count();
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

    cout << "Linear Search Time Complexity Analysis:" << endl;
    cout << "Array Size: " << array_size << endl;

    double best_case_time = time_calc(array, array_size, 0);
    cout << "Time taken for Best Case: " << best_case_time << " milliseconds" << endl;

    double avg_case_time = time_calc(array, array_size, array_size / 2);
    cout << "Time taken for Average Case: " << avg_case_time << " milliseconds" << endl;

    double worst_case_time = time_calc(array, array_size, array_size);
    cout << "Time taken for Worst Case: " << worst_case_time << " milliseconds" << endl;

    cout << "Mohit Kumar 04076803121";
    return 0;
}
