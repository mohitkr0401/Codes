#include <bits/stdc++.h>
using namespace std;

// left rotate by d places

// brute
// time complexity = O(d) + O(n-d) + O(d) = O(n-d)
// space complexity = O(d)
int Brute_approach(vector<int> arr, int n, int d)
{
    d = d % n;
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        a[i] = temp[i - (n - d)];
    }
}

// optimal
//  time complexity = O(2n)
//  space complexity = O(1)
int Optimal_approach(vector<int> arr, int n, int d)
{
    reverse(arr.begin(), arr.begin() + d); //O(d)
    reverse(arr.begin() + d, arr.end()); // O(n-d)
    reverse(arr.begin(), arr.end()); //O(n)
}

//for right rotation
void rotate(vector<int> arr, int d)
{
	if(d>size)
	d = d % size;

    reverse(arr.begin(),arr.end());
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.begin()+d);
}