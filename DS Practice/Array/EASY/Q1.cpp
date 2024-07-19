#include <bits/stdc++.h> 
using namespace std;
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int biggest= INT_MIN;
        for(int i =0;i<n;i++){
            biggest=max(biggest,arr[i]);
        }
        return biggest;
    }
};

