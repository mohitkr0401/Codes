// brute better optimal 
// time complexity O(n)

int isSorted(int n, vector<int> a) {

    for(int i=0;i<n;i++)

    {

        if(a[i]<a[i-1])  return 0;

    }

    return 1;
}