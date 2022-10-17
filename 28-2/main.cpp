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
    void setData(int real, int imag)
    {
        this->real=real;
        this->imag=imag;
    }
    void showData()
    {
        cout<<"Real = "<<real<<" imag = "<<imag<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(3,4);
    c1.showData();
    return 0;
}
