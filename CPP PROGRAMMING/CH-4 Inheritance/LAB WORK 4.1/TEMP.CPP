#include <iostream>
using namespace std;

class P
{
protected:
    int Celcius;
};

class Q : public P
{
public:
    void SetTemp()
    {
        cout << "Enter the Temperature in Celsius : ";
        cin >> Celcius;
    }

    void TempFahrenheit()
    {
        cout << "Temperature in Fahrenheit is : "
             << (Celcius * 9.0 / 5) + 32 << endl;
    }
};

class R : public Q
{
public:
    void TempKelvin()
    {
        cout << "Temperature in Kelvin is : "
             << Celcius + 273.15 << endl;
    }
};

int main()
{
    R r1;

    r1.SetTemp();
    r1.TempFahrenheit();
    r1.TempKelvin();
}
