#include<iostream>
using namespace std;
class abc
{
private:
    int a[5];
public:
    void getvalue()
    {
        for (int i = 0; i < 5; i++)
        {
            cout<<"Enter the value : ";
            cin>>a[i];
        }
    }
    int print()
    {
        for (int i=0; i < 5; i++)
        {
            cout<<a[i]<<" ";
        } 
    }


};
int main()
{
    abc z;
    z.getvalue();
    cout<<z.print();
    return 0;
}