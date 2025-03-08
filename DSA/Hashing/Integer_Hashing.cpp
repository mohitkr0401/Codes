#include<bits/stdc++.h>
using namespace std;

// Time Complexity: O(n) 
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        //fetch
        cout<<hash[x]<<endl;
    }
    return 0;
}