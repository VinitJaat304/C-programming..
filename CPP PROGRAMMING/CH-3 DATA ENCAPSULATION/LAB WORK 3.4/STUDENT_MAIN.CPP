#include <iostream>
using namespace std;

int CUBE(int a, int b, int c)
{
    return (a * a * a) + (b * b * b) + (c * c * c);
}
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
    void setdata()
    {
        cout << "Enter the first number :";
        cin >> a;
        cout << "Enter the Second number :";
        cin >> b;
        cout << "Enter the Third number :";
        cin >> c;
    }
    void getdata()
    {
        cout << "The sum of cubes is : " << CUBE(a, b, c);
    }
};
int main()
{
    Y s1;
    s1.setdata();
    s1.getdata();
}
