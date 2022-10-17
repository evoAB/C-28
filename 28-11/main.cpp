#include <iostream>

using namespace std;

class Marks
{
private:
    int mark;
public:
    void setMarks(int m)
    {
        mark=m;
    }
    void showMarks()
    {
        cout<<"Marks : "<<mark<<endl;
    }
    Marks* operator -> ()
    {
        return this;
    }
};
int main()
{
    Marks m1;
    m1.setMarks(56);
    m1->showMarks();
    return 0;
}
