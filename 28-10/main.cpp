//Now overload () function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.
#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    int inches;
public:
    Distance()
    {
        feet=0;
        inches=0;
    }
    Distance(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void showDistance()
    {
        cout<<"Feet = "<<feet<<" Inches = "<<inches<<endl;
    }

    Distance operator()(int a, int b, int c)
    {
        this->feet=a+c+5;
        this->inches=a+b+15;
        return *this;
    }

};
int main()
{
    Distance d1(4,2), d2;
    d1.showDistance();
    d2=d1(6,7,8);
    d2.showDistance();
    return 0;
}
