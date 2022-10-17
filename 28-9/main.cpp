//Create an Integer class that contains int x as an instance variable and
//overload casting int() operator that will type cast your Integer class object to int data type.
#include <iostream>

using namespace std;

class Integer
{
private:
    int x;
public:
    Integer()
    {
        x=0;
    }
    Integer(int n)
    {
        x=n;
    }
    void showInteger()
    {
        cout<<"Integer = "<<x<<endl;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    Integer i1(5);
    int a=i1;
    cout<<a;
    return 0;
}
