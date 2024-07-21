#include <bits/stdc++.h>
using namespace std;

// union and sorted, no repetition

// brute
// time complexity = O(n1logn)+ O(n2logn)O(n1+n2)
// space complexity = O(n1+n2) + O(n)

int brute(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(arr[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }
    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }
    return temp;
}

// optimal
//  time complexity = O(n1+n2)
//  space complexity = O(n1+n2)

int optimal(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    vector<int> temp;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (temp.size() == 0 || temp.back() != arr1[i])
            {
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (temp.size() == 0 || temp.back() != arr2[j])
            {
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (temp.size() == 0 || temp.back() != arr1[i])
        {
            temp.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (temp.size() == 0 || temp.back() != arr2[j])
        {
            temp.push_back(arr2[j]);
        }
        j++;
    }
    return temp;
}

// intersection, can be repeated
// brute
// time complexity = O(n1*n2)
// space complexity = O(n1+n2)

int brute_intersection(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int vis[n2] = {0};
    vector<int> temp;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; i++)
        {
            if (arr1[i] == arr2[j] && vis[j] == 0)
            {
                temp.push_back(arr1[i]);
                vis[j] = 1;
                break;
            }
            if (arr2[i] > arr1[i])
            {
                break;
            }
        }
    }
    return temp;
}

// optimal
// time complexity = O(n1+n2)
// space complexity = O(1)

int optimal_intersection(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> temp;
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] > arr2[j])
        {
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            temp.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    return temp;
}
