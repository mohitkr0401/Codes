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
    int sum = (n*(n+1))/2;
    int sum2=0;
    for (int i = 0; i < n; i++)
    {
        sum2 += arr[i];
    }
    return sum - sum2;
}

// approach 2 using xor
//  time complexity = O(n)
//  space complexity = O(1)
// this approach is slightly better than sum approach as, when calculating the sum the value can cross the limit of integer, but in xor it will always stay in integer limit. 
int missingNumber4(int arr[], int n)
{
    int xor1 = 0, xor2 = 0;
    int N = n - 1;
    for (int i = 0; i < N; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}
