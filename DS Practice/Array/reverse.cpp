#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i]<<" ";
    }
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter the Number of Elements in Array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The Reverse of Array is: " << endl;
    reverse(arr, n);
    print_array(arr, n);
    return 0;
}
