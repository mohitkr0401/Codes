#include <bits/stdc++.h>
using namespace std;

// brute force
// first sort the array then "largert = arr[n-1]"
// time complexity = O(nlogn) for sorting O(n) for findind.......O(n+nlogn)
for (int i = n - 2; i >= 0; i--)
{
    if (arr[i] != largest)
    {
        second_largest = arr[i];
        break;
    }
}

// better
//  time complexity = O(n)+O(n) = O(2n)
int largest = arr[0];
for (int i = 0; i < n; i++)
{
    if (arr[i] > largest)
    {
        largest = arr[i];
    }
}
int second_largest = -1;
for (int i = 0; i < n; i++)
{
    if (arr[i] != largest && arr[i] > second_largest)
    {
        second_largest = arr[i];
    }
}

// optimal
//  time complexity = O(n)
int secondLarge(vector<int> arr, n)
{
    int largest = arr[0];
    int second_largest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int secondSmall(vector<int> arr, n)
{
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] > smallest)
        {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{

    int min = INT_MAX;
    int smin = INT_MAX;
    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            smin = min;
            min = a[i];
        }
        else if (a[i] > min && a[i] < smin)
        {
            smin = a[i];
        }

        if (a[i] > max)
        {
            smax = max;
            max = a[i];
        }

        else if (a[i] < max && a[i] > smax)
        {
            smax = a[i];
        }
    }
    return {smax, smin};
}