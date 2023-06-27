/* Create two classes: Distance1 with data members: feet and inches, Distance2 with data members: m and cm.
WAP to convert object of Distance1 to Distance2. m = 3.28 feet */

#include <iostream>
using namespace std;

class Distance2;

class Distance1
{
private:
    int feet, inches;

public:
    Distance1(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
    }

    friend Distance2 convertToDistance2(const Distance1 &d1);
};

class Distance2
{
private:
    int m, cm;

public:
    Distance2(int meters = 0, int centimeters = 0)
    {
        m = meters;
        cm = centimeters;
    }

    void displayDistance()
    {
        cout << "Meters: " << m << "\t"
             << "Centimeters: " << cm << endl;
    }
};

Distance2 convertToDistance2(const Distance1 &d1)
{
    int totalInches = d1.feet * 12 + d1.inches;
    double totalFeet = static_cast<double>(totalInches) / 12.0;
    double meters = totalFeet / 3.28;

    /*
    The static_cast<int> performs a static cast,
    which is a way to explicitly convert one type to another type.
    In this case, it converts the double value of meters to an int value and assigns it to m.
    */

    int m = static_cast<int>(meters);
    /*
    Here, meters is a double variable that represents the total meters calculated from the given feet and inches.
    Since m is an int variable, we use the static_cast<int> to explicitly convert the value of meters to an int type.
    */
    int cm = static_cast<int>((meters - m) * 100);

    Distance2 d2(m, cm);
    return d2;
}

int main()
{
    Distance1 d1(5, 6);
    Distance2 d2 = convertToDistance2(d1);
    d2.displayDistance();
    return 0;
}
