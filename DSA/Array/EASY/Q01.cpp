#include <bits/stdc++.h> 
using namespace std;

// Brute force
// just sort the array and return the last element.
// time complexity = O(nlogn)


// optimal 
// time complexit = O(n)
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.largest(arr, n) << endl;
    }
}






