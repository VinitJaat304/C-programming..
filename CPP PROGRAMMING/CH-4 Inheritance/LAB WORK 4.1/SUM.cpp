#include <iostream>
using namespace std;

class X
{
protected:
    int a;
    int b;
    int c;
};
class Y : public X
{
public:
    // setter
    void setdata()
    {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
        cout << "Enter the value of c: ";
        cin >> c;
    }
    int Acube(int a, int b, int c)
    {
        return (a * a * a) + (b * b * b) + (c * c * c);
    }
    // getter
    void getdata()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};
