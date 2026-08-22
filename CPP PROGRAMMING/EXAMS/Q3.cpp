#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
    string color;
    double area;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }

    void setArea(double a)
    {
        area = a;
    }

    double getArea()
    {
        return area;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    void input()
    {
        string c;

        cout << endl << "Enter circle color: ";
        cin >> c;

        cout << "Enter radius: ";
        cin >> radius;

        setColor(c);
    }

    void calculateArea()
    {
        double a = 3.14159 * radius * radius;
        setArea(a);
    }

    void display()
    {
        cout <<endl << "Circle Details" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    void input()
    {
        string c;

        cout << endl << "Enter rectangle color: ";
        cin >> c;

        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;

        setColor(c);
    }

    void calculateArea()
    {
        double a = length * width;
        setArea(a);
    }

    void display()
    {
        cout <<endl << "Rectangle Details" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.input();
    c.calculateArea();
    c.display();

    r.input();
    r.calculateArea();
    r.display();

    return 0;
}