#include <bits/stdc++.h>
using namespace std;
void Pattern(int n){
       for(int i=1;i<=n*2-1;i++){ // twice the number of rows minus one
        int star = i;
        if(i>n) star = 2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        Pattern(n);
    }
    return 0;
}