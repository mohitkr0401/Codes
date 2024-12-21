#include <iostream>
using namespace std;

void Swap(int arr[], int i, int j)
{
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
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
    cout << "Enter the Size of Array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Swap(arr, 1,3);
    print_array(arr, size);
    return 0;
}