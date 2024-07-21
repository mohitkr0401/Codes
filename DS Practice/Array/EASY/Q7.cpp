#include <bits/stdc++.h>
using namespace std;

// move zeroes

// Brute
// Time: O(2n)
// Space: O(n)
int Brute(vector<int> arr, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++) // O(n)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for (int i = 0; i < nz; i++) // O(n-x)
    {
        arr[i] = temp[i];
    }
    for (int i = nz; i < n; i++) // O(x)
    {
        arr[i] = 0;
    }
    return arr;
}

// Optimal
// Time: O(n)
// Space: O(1)
int Optimal(vector<int> arr, int n)
{
    int j = -1;
    for (int i = 0; j < n; j++) // O(n-x)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    if (j==-1)
    {
        return arr;
    }
    
    for (int i = j + 1; i < n; i++) // O(x)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    return arr;
}
