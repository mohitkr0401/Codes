#include<iostream>
using namespace std;
int main() 
{
    int arr[500];
    int sum;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"The Sum of Elements is: "<<sum<<endl;
    return 0;
    
}