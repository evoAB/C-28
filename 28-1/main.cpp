#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex()
    {
        real=0;
        imag=0;
    }
    Complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    friend ostream& operator << (ostream &out, Complex &c)
    {
        out<<"Real = "<<c.real<<" Imag = "<<c.imag<<endl;
        return out;
    }
    friend istream& operator >> (istream &in, Complex &c)
    {
        in>>c.real>>c.imag;
        return in;
    }
};
int main()
{
    Complex c1;
    cout<<"Enter complex number : ";
    cin>>c1;
    cout<<"Complex Value : "<<endl;
    cout<<c1<<endl;
    return 0;
}
