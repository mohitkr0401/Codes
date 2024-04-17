#include <iostream>
using namespace std;
class natsum
{
    static int c;
    int n;

public:
    int sum();
};
int natsum ::c = 0;
int natsum ::sum()
{
    c++;
    return c;
}
int main ()
{
    natsum ns;
    int n,temp=0;
    cout<<"Enter The Natural Number = ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        temp = temp + ns.sum();
    }
    cout<<"Sum is "<<temp<<"\n";
    return 0;
}