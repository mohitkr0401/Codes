#include<iostream>
using namespace std;
int find_unique(int arr[],int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans^=(arr[i]);
    }
    return ans;    
}

int main()
{
    int size,ans,arr[100];
    cout << "Enter the number of elements in array: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    ans=find_unique(arr , size);
    cout<<"The unique element is "<<ans<<endl;
    return 0;
    
}