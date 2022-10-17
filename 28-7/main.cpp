#include <iostream>

using namespace std;

class Integer
{
private:
    int i;
public:
    Integer()
    {
        i=0;
    }
    Integer(int n)
    {
        i=n;
    }
    void showInteger()
    {
        cout<<"Integer : "<<i<<endl;
    }
    int operator !()
    {
        return !i;
    }
};
int main()
{
    Integer i(5);
    i=!i;
    i.showInteger();

    return 0;
}
