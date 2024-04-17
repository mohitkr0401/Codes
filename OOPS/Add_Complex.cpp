#include<iostream>
using namespace std;
class complex 
{
    int re,img;
    public:
    complex();
    complex(int,int);
    disp.data();
    complex addition(complex);
};
complex :: complex()
{
    re=img=0;
}
complex :: complex(int x, int y)
{
    re=x;
    img=y;
}
complex :: disp.data()
{
    cout :: disp.data()
}
complex :: disp.data()
{
    cout<<re<<"+i"<<img<<"\n";
}
complex :: addition(complex num)
{
    complex sum;
    sum.re=re+num.re;
    sum.img=img+num.img;
    retun sum;
}
int main()
{
    complex n1,n2;
    int x1,x2,y1,y2;
    complex sum;
    cout<<"Enter Real and Imaginary Values for First Complex Number = "<<endl;
    cin>>x1>>y1;
    n1=complex(x1,y1);
    cout<<"Complex Number is : ";
    n1.disp_data();
    cout<<"Enter Real and Imaginary Values for Second Complex Number = "<<endl;
    cin>>x2>>y2;
    n2=complex(x2,y2);
    cout<<"Complex Number is : ";
    n2.disp_data();
    sum = n1.addition(n2);
    cout<<"The Sum is : ";
    sum.disp_data();

}