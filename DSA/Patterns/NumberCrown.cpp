#include <bits/stdc++.h>
using namespace std;
void Pattern(int n){
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //space
        for(int j=1;j<=space;j++){
            cout<<" "<<" ";
        }
        //reverse number
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        space-=2;
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