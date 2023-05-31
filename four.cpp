#include <iostream>
#include <cmath>
using namespace std;

float circleArea(float radius)
{
    return 3.1415 * pow(radius, 2);
}

float rectangleArea(float length, float breadth)
{
    return length * breadth;
}

float triangleArea(float base, float height)
{
    return 0.5 * base * height;
}

void calculateArea(int choice)
{
    switch (choice)
    {
    case 1:
        float radius;
        cout << "Enter radius:";
        cin >> radius;
        float area = circleArea(radius);
        cout << "Area of the circle is " << area;
        break;
    case 2:
        float length, breadth;
        cout << "Enter length:";
        cin >> length;
        cout << "Enter breadth:";
        cin >> breadth;
        float area = rectangleArea(length, breadth);
        cout << "Area of the rectangle is " << area;
        break;
    case 3:
        float base, height;
        cout << "Enter base:";
        cin >> base;
        cout << "Enter height:";
        cin >> height;
        float area = triangleArea(base, height);
        cout << "Area of the triangle is " << area;
        break;

    default:
        break;
    }
}