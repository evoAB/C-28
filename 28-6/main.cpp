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
    Complex(const Complex &c)
    {
        real=c.real;
        imag=c.imag;
    }
    void showData()
    {
        cout<<"Real = "<<real<<" Imag = "<<imag<<endl;
    }
    Complex operator = (const Complex &c)
    {
        if(this->real==c.real && this->imag==c.imag)
            return *this;

        this->real=c.real;
        this->imag=c.imag;
        return *this;
    }
};
int main()
{
    Complex c1(3,4),c3;
    Complex c2(c1);
    c2.showData();
    c3=c1;
    c3.showData();

    return 0;
}
