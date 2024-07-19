#include <bits/stdc++.h> 
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a)
{

    int min = INT_MAX;

    int smin = INT_MAX;

    int max = INT_MIN;

    int smax = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (a[i] < min)
        {

            smin = min;

            min = a[i];
        }

        else if (a[i] > min && a[i] < smin)
        {

            smin = a[i];
        }

        if (a[i] > max)
        {

            smax = max;

            max = a[i];
        }

        else if (a[i] < max && a[i] > smax)
        {

            smax = a[i];
        }
    }

    return {smax, smin};
}