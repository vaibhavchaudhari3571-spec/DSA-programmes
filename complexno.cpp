#include<iostream>
using namespace std;
class complex {
    private:
    float real;
    float imag;
    public:
    complex()
    {
    real=0;
    imag=0;
    }
complex(float r,float i)
{
    real=r;
    imag=i;
}
~complex()
{
}
void display()
{
    cout<<real<<"+"<<imag<<"i"<<endl<<endl;
    
}
complex add(complex c)
{
    float r=real+c.real;
    float i=imag+c.imag;
    return complex(r,i);
}
complex sub(complex c)
{
    float r=real-c.real;
    float i=imag-c.imag;
    return complex(r,i);
}
complex multi(complex c)
{
    float r=real*c.real;
    float i=imag*c.imag;
    return complex(r,i);
}
};
int main()
{
    complex c1(2.0,3.0);
    cout<<"complex no is=";
    c1.display();
    complex c2(5.0,7.0);
    cout<<"complex no is=";
    c2.display();
    complex c3(4.0,5.0);
    cout<<"complex no is=";
    c3.display();
    complex c4(8.0,9.0);
    cout<<"complex no is=";
    c4.display();
    complex sum=c1.add(c2); 
    cout<<"sum is";
    sum.display();
    complex sub=c1.sub(c2); 
    cout<<"sub is";
    sub.display();
    complex multi=c1.multi(c2); 
    cout<<"multipication is=";
    multi.display();
    return 0;
}


/*
output
PS D:\vaibhav> cd "d:\vaibhav\" ; if ($?) { g++ linear_search.cpp -o linear_search } ; if ($?) { .\linear_search }
Enter the size of the array: 10
Enter 10 elements:
1 2 3 4 5 6 7 8 9 10
Enter the element to search: 7
Element found at index 6.
PS D:\vaibhav> cd "d:\vaibhav\" ; if ($?) { g++ complexno.cpp -o complexno } ; if ($?) { .\complexno }
complex no is=2+3i

complex no is=5+7i

complex no is=4+5i

complex no is=8+9i

sum is7+10i

sub is-3+-4i

multipication is=10+21i

*/