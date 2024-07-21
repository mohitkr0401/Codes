#include <bits/stdc++.h>
using namespace std;

// brute
//  time complexity = O(nlogn)+O(n)=O(n+nlogn)
//  space complexity = O(n)+O(n)=O(n)

int Brute_Approach(vector<int> arr, n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    for (auto it : st)
    {
        arr[index] = it;
        index++;
    }
}

// optimal approach
//   time complexity = O(n)
//   space complexity = O(1)
int Optimal_Approach(vector<int> arr, n)
{

    int i = 0;

    for (int j = 1; j < n; j++)

    {

        if (arr[i] != arr[j])

        {

            arr[i + 1] = arr[j];

            i++;
        }
    }

    return i + 1; // returning total unique elements.
}
