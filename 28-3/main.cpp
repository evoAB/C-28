#include <iostream>

using namespace std;

class Array
{
private:
    int arr[100];
    const int size=100;
public:
    void setData(int n, int index)
    {
        if(index>=size)
        {
            cout<<"Array Index out of Bound"<<endl;
            exit(0);
        }
        arr[index]=n;
    }
    void showData(int index)
    {
        cout<<arr[index]<<endl;
    }

    int operator [](int index)
    {
        if(index>=size)
        {
            cout<<"Array Index out of Bound"<<endl;
            exit(0);
        }
        return arr[index];
    }
};
int main()
{
    Array a;
    a.setData(123,90);
    a.showData(90);
    cout<<a[90];

    return 0;
}
