#include <bits/stdc++.h>
using namespace std;

// linear search
//  time complexity = O(n)
//  space complexity = O(1)
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;
}