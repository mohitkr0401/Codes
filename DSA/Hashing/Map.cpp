#include<bits/stdc++.h>
using namespace std;

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
    for(auto x: mpp){
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