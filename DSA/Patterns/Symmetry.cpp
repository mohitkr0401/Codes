#include <bits/stdc++.h>
using namespace std;

void Pattern(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (star > n)
            star = 2 * n - i;

        // stars
        for (int j = 1; j <= star; j++)
        {
            cout << "*"<<" ";
        }

        // spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " "<<" ";
        }

        // stars
        for (int j = 1; j <= star; j++)
        {
            cout << "*"<<" ";
        }
        cout << endl;
        if (i < n)
            space -= 2;
        else
            space += 2;
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