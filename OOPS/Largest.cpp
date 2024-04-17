#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n1, n2, n3;
    cout << "Enter Three Numbers: ";
    cin >> n1 >> n2 >> n3;
    if (n1 >= n2 && n1 >= n3)
    {
        cout << "Largest Number = " << n1;
    }
    else if (n2 >= n1 && n2 >= n3)
    {
        cout << "Largest Number = " << n2;
    }
    else if (n3 >= n1 && n3 >= n2)
    {
        cout << "Largest Number = " << n3;
    }
    return 0;
}