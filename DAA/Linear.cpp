#include <iostream>
#include <time.h>

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
    clock_t T ,time_elapsed;
    T = clock();
    cout<<"Before Starting: "<<T<<endl;
    linear_search(arr, size, target);
    T = T-clock();
    double seconds=((double)(T))/CLOCKS_PER_SEC;
    cout<<"After Searching: "<<T<<endl;
    time_elapsed = (T/CLK_TCK)*1000;
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
        array[i] = i; 
    }
    // Test linear search for each case
    cout << "Linear Search Time Complexity Analysis:" << endl;
    cout << "Array Size: " << array_size << endl;
    double best_case_time = time_calc(array, array_size, 0);
    cout << "Time taken for Best Case: " << best_case_time << " Seconds" << endl;
    double avg_case_time = time_calc(array, array_size, array_size / 2);
    cout << "Time taken for Average Case: " << avg_case_time << " Seconds" << endl;
    double worst_case_time = time_calc(array, array_size, array_size);
    cout << "Time taken for Worst Case: " << worst_case_time << " Seconds" << endl;
    cout << "\n Mohit Kumar 04076803121";
    return 0;
}
