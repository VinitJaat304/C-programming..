#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void startEngine() = 0;
    virtual void drive() = 0;
};

class Car : public Vehicle
{
public:
    void startEngine() override
    {
        cout << "Car engine started." << endl;
    }

    void drive() override
    {
        cout << "Car is driving." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void startEngine() override
    {
        cout << "Bike engine started." << endl;
    }

    void drive() override
    {
        cout << "Bike is driving." << endl;
    }
};

int main()
{
    int n, choice;

    cout << "Enter number of vehicles (maximum 4): ";
    cin >> n;

    if (n > 4)
    {
        n = 4;
    }

    Vehicle *vehicles[4];

    for (int i = 0; i < n; i++)
    {
        cout <<endl << "Enter vehicle " << i + 1 << " type:" << endl;
        cout << "1. Car" << endl;
        cout << "2. Bike" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            vehicles[i] = new Car();
        }
        else if (choice == 2)
        {
            vehicles[i] = new Bike();
        }
        else
        {
            cout << "Invalid choice. Creating Car." << endl;
            vehicles[i] = new Car();
        }
    }

    cout <<endl << "--- Vehicle Details ---" << endl;

    for (int i = 0; i < n; i++)
    {
        vehicles[i]->startEngine();
        vehicles[i]->drive();
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete vehicles[i];
    }

    return 0;
}