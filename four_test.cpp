#include <iostream>
#include<cmath>
#include <cassert>

using namespace std;
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


void testCircleArea() {
    // Test case 1: Positive radius
    float radius1 = 5;
    float expectedArea1 = 78.5375;
    float calculatedArea1 = circleArea(radius1);
    assert(calculatedArea1 == expectedArea1);

    // Test case 2: Zero radius
    float radius2 = 0;
    float expectedArea2 = 0;
    float calculatedArea2 = circleArea(radius2);
    assert(calculatedArea2 == expectedArea2);

    // Test case 3: Negative radius
    float radius3 = -7;
    float expectedArea3 = 0;
    float calculatedArea3 = circleArea(radius3);
    assert(calculatedArea3 == expectedArea3);
}

void testRectangleArea() {
    // Test case 1: Positive length and breadth
    float length1 = 4;
    float breadth1 = 6;
    float expectedArea1 = 24;
    float calculatedArea1 = rectangleArea(length1, breadth1);
    assert(calculatedArea1 == expectedArea1);

    // Test case 2: Zero length and positive breadth
    float length2 = 0;
    float breadth2 = 8;
    float expectedArea2 = 0;
    float calculatedArea2 = rectangleArea(length2, breadth2);
    assert(calculatedArea2 == expectedArea2);

    // Test case 3: Negative length and zero breadth
    float length3 = -3;
    float breadth3 = 0;
    float expectedArea3 = 0;
    float calculatedArea3 = rectangleArea(length3, breadth3);
    assert(calculatedArea3 == expectedArea3);
}

void testTriangleArea() {
    // Test case 1: Positive base and height
    float base1 = 3;
    float height1 = 8;
    float expectedArea1 = 12;
    float calculatedArea1 = triangleArea(base1, height1);
    assert(calculatedArea1 == expectedArea1);

    // Test case 2: Zero base and positive height
    float base2 = 0;
    float height2 = 5;
    float expectedArea2 = 0;
    float calculatedArea2 = triangleArea(base2, height2);
    assert(calculatedArea2 == expectedArea2);

    // Test case 3: Negative base and zero height
    float base3 = -5;
    float height3 = 0;
    float expectedArea3 = 0;
    float calculatedArea3 = triangleArea(base3, height3);
    assert(calculatedArea3 == expectedArea3);
}

int main() {
    testCircleArea();
    testRectangleArea();
    testTriangleArea();

    cout << "All tests passed!" << endl;

    return 0;
}
