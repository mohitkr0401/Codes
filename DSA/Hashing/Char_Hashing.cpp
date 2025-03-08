#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int hash[26] = {0};
    // int hash[256] = {0}; //for all ascii characters
    for(int i = 0; i < s.length(); i++){
        hash[s[i] - 'a']++;
        // hash[s[i]]++; //for all ascii characters
    }
    int q;
    cin>>q;
    while(q--){
        char x;
        cin>>x;
        cout<<hash[x - 'a']<<endl;
        // cout<<hash[x]<<endl; //for all ascii characters
    }
    return 0;
}