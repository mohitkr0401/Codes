#include <bits/stdc++.h>
using namespace std;


// maximum consecutives 1

// time complexity = O(n)
// space complexity = O(1)

int consecutive(vector<int> arr, int n)
{
    int maxi = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}
