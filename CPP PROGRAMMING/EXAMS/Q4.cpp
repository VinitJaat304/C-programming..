#include <iostream>
using namespace std;

class Shape
{
private:
    string color;
    float area;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }

    void setArea(float a)
    {
        area = a;
    }

    float getArea()
    {
        return area;
    }

    virtual void displayDetails()
    {
        cout << "Shape" << endl;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    void input()
    {
        string color;

        cout << "Enter Circle Color: ";
        cin >> color;

        cout << "Enter Radius: ";
        cin >> radius;

        setColor(color);
        setArea(3.14 * radius * radius);
    }

    void displayDetails()
    {
        cout << endl
             << "--- Circle Details ---" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length;
    float width;

public:
    void input()
    {
        string color;

        cout << endl
             << "Enter Rectangle Color: ";
        cin >> color;

        cout << "Enter Length: ";
        cin >> length;

        cout << "Enter Width: ";
        cin >> width;

        setColor(color);
        setArea(length * width);
    }

    void displayDetails()
    {
        cout << endl
             << "--- Rectangle Details ---" << endl;
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
    r.input();

    Shape *shapes[2];

    shapes[0] = &c;
    shapes[1] = &r;

    cout << endl
         << "===== Shape Details =====" << endl;

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->displayDetails();
    }

    return 0;
}