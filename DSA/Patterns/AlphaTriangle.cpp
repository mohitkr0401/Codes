#include <bits/stdc++.h>
using namespace std;

void Pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + (n - 1);
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }

    for(int i = 0; i<n; i++){
        for(char Ch = 'E'-i; Ch <= 'E'; Ch++) {
            cout << Ch << " ";
        }
        cout << endl;
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