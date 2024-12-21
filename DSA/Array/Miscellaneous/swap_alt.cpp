#include <iostream>
using namespace std;
void swap_alt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void print_array(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], size;
    cout << "Enter the Size of the Array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swap_alt(arr, size);
    print_array(arr, size);
    return 0;
}