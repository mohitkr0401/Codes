#include <bits/stdc++.h>
using namespace std;

// time complexit =O(n)
// space complexity =O(1)
int Shift_Left_By_One(vector<int> arr, n)
{
    int temp = arr[0];
    for (int i = 1; i < n - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    return arr;
}