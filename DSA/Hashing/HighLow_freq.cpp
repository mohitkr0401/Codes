#include<bits/stdc++.h>
using namespace std;

//We have to find Highest and Lowest frequency of an element in an array
// Time Complexity: O(n)
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    //iterate over the map
    int max = INT_MIN;
    for(auto x: mpp){
        if(x.second >= max){
            max = x.second;
        }

        cout<<x.first<<" "<<x.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<mpp[x]<<endl;
    }
    return 0; 
    
}