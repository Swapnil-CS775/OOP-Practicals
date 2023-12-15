#include<iostream>
using namespace std;

class complex
{
    public:
    int real;
    float imag;
    complex();

   friend istream & operator>>(istream&,complex &);
   friend ostream & operator<<(ostream&,const complex &);

    complex operator +(complex);
    complex operator *(complex);
};


complex::complex()
{
    real=0;
    imag=0;
}

istream & operator>>(istream&,complex &i)
{
    cin>>i.real>>i.imag;
    return cin;
}
ostream & operator<<(ostream&,const complex &d)
{
    cout<<d.real<<" + "<<d.imag<<"j"<<endl;
    return cout;
}

complex complex::operator +(complex c1)
{
    complex temp;
    temp.real=real+c1.real;
    temp.imag=imag+c1.imag;

    return temp;
}

complex complex::operator *(complex c2)
{
    complex tmp;
    tmp.real=real*c2.real-imag*c2.imag;
    tmp.imag=real*c2.imag+imag*c2.real;

    return tmp;
}

int main()
{
    complex c1,c2,c3,c4;
    cout<<"Enter real and imaginary part of first complex number:";
    cin>>c1;
    cout<<"Enter real and imaginary part of second complex number:";
    cin>>c2;

    c3=c1+c2;
    cout<<"addition is:"<<c3;

    c4=c1*c2;
    cout<<"Multiplication is:"<<c4;

    return 0;
}