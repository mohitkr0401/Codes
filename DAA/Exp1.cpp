#include <iostream>
#include <time.h>
using namespace std;
int linear_search(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }   
    }
    return -1;
}
int main()
{
    
    int arr[] = {55, 4, 80, 45, 156, 12, 1, 16, 34, 6, 35, 64, 364, 9, 69, 6453};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter the Element: ";
    cin >> key;
    clock_t t;
    t = clock();
    int index = linear_search(arr, key, size);
    if (index!=-1)
    {
        cout<<"Element Found at Index: "<<index<<endl;
    }
    else
    {
        cout<<"Element Not Found!!"<<endl;
    }
    
    t = clock() - t;
    double time_elapsed = t / CLK_TCK;
    cout<<"Total Time Elapsed is: "<<time_elapsed;
    return 0;
}