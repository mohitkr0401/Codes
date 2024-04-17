#include<iostream>
void swap(int,int);
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter Values of a and b: ";
    cin>>a>>b;
    cout<<"Value of a = "<<a;
    cout<<endl<<"Value of b = "<<b;
    swap(a,b);
    return 0;
}
void swap(int a1, int b1)
{
    int c1;
    c1=a1;
    a1=b1;
    b1=c1;
    cout<<endl<<endl<<"Values After Swapping";
    cout<<"\n Value of a = "<<a1;
    cout<<"\n Value of b = "<<b1;
}