#include <iostream>
#include <cmath>
using namespace std;

class AreaCalculator {
public:
    float circleArea(float radius)
    {
        if (radius >= 0) {
            return 3.1415 * pow(radius, 2);
        } else {
            return 0;
        }
    }

    float rectangleArea(float length, float breadth)
    {
        if (length >= 0 && breadth >= 0) {
            return length * breadth;
        } else {
            return 0;
        }
    }

    float triangleArea(float base, float height)
    {
        if (base >= 0 && height >= 0) {
            return 0.5 * base * height;
        } else {
            return 0;
        }
    }

    void calculateArea(int choice)
    {
        switch (choice)
        {
        case 1: {
            float radius;
            cout << "Enter radius: ";
            cin >> radius;
            if (radius >= 0) {
                cout << "Area of the circle is " << circleArea(radius);
            } else {
                cout << "Invalid input. Radius cannot be negative.";
            }
            break;
        }
        case 2: {
            float length, breadth;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
            if (length >= 0 && breadth >= 0) {
                cout << "Area of the rectangle is " << rectangleArea(length, breadth);
            } else {
                cout << "Invalid input. Length and breadth cannot be negative.";
            }
            break;
        }
        case 3: {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            if (base >= 0 && height >= 0) {
                cout << "Area of the triangle is " << triangleArea(base, height);
            } else {
                cout << "Invalid input. Base and height cannot be negative.";
            }
            break;
        }
        default:
            cout << "Wrong command" << endl;
            break;
        }
    }
};

int main() {
    int n;
    cout << "Enter 1 to find the area of a circle, 2 for a rectangle, and 3 for a triangle: ";
    cin >> n;

    AreaCalculator calculator;
    calculator.calculateArea(n);

    return 0;
}
