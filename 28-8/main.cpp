#include <iostream>

using namespace std;

class Coordinate
{
private:
    int x,y,z;
public:
    void setData(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void showData()
    {
        cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
    Coordinate operator , (Coordinate c)
    {
        Coordinate temp;
        temp.x=c.x;
        temp.y=c.y;
        temp.z=c.z;
        return temp;
    }
};
int main()
{
    Coordinate c1,c2,c3;
    c1.setData(3,4,5);
    c2.setData(7,8,9);
    c3=(c1,c2);
    c3.showData();
    return 0;
}
