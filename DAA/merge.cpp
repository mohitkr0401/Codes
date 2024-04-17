#include <iostream>
#include <time.h>

using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* leftArr = new int[n1];
    int* rightArr = new int[n2];

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }

    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

double time_calc(int arr[], int size)
{
    clock_t T = clock();
    mergeSort(arr, 0, size - 1);
    T = clock() - T;
    double time_elapsed = double(T) / CLK_TCK;
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
        array[i] = rand() % array_size; // Randomized array
    }

    // Test merge sort
    cout << "Merge Sort Time Complexity Analysis:" << endl;
    cout << "Array Size: " << array_size << endl;

    // Measure time for average case
    double avg_case_time = time_calc(array, array_size);
    cout << "Time taken for Average Case: " << avg_case_time << " seconds" << endl;
    cout << "Mohit Kumar 04076803121";
    return 0;
}
