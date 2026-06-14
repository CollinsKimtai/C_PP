#include <iostream>
using namespace std;

// Create class
class Circle
{
public:
    float radius;
    double PI;

    double CalculateArea()
    {
        return PI * (radius * radius);
    }

    double CalculateCircumference()
    {
        return PI * radius * 2;
    }
};

int main()
{
    Circle circle1;

    // Initialize values
    circle1.radius = 5;
    circle1.PI = 3.147;

    cout << "Area of Circle = " << circle1.CalculateArea() << endl;
    cout << "Circumference of Circle = "
         << circle1.CalculateCircumference() << endl;

    return 0;
}