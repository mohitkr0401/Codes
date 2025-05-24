#include <bits/stdc++.h>
using namespace std;

void Pattern(int n)
{
   int space = 0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        for(int j =0;j<space;j++){
            cout<<" "<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        space+=2;
    }
    space = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*"<<" ";
        }
        for (int j = 0; j < space; j++)
        {
            cout << " "<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
        space -= 2;
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