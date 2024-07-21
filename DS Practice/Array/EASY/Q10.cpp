#include <bits/stdc++.h>
using namespace std;

// find missing number from the array

// brute
//  time complexity = O(n*n)
//  space complexity = O(1)
int missingNumber(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++) // can also use "n" instead of "n-1"
        {
            if (arr[j] == i)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
}

// better
//  time complexity = O(2n)
//  space complexity = O(n)
int missingNumber2(int arr[], int n)
{
    hash[n + 1] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        hash[arr[i]] = 1;
    }
    for (int i = 0; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
}

// optimal
//   time complexity = O(n)
//   space complexity = O(1)

// approach 1 (using sum)
//  time complexity = O(n)
//  space complexity = O(1)
int missingNumber3(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
}
// incomplete