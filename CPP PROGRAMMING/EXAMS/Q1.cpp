#include <iostream>
using namespace std;

class Laptop
{
private:
    string name;
    float price;
    string processor;

public:
    void setterLaptop()
    {
        cout << "Enter Laptop Name: ";
        cin >> name;
        cout << "Enter Laptop Price: ";
        cin >> price;
        cout << "Enter Laptop Processor: ";
        cin >> processor;
    }

    void getterlaptop()
    {
        cout <<endl << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Processor: " << processor << endl;
    }
};

int main()
{
    Laptop l1;

    l1.setterLaptop();

    l1.getterlaptop();

    return 0;
}