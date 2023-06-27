/* do the distance conversion problem with friend function */

#include <iostream>
using namespace std;

class Distance
{
private:
    int meters, centimeters;

public:
    Distance(int m = 0, int cm = 0)
    {
        meters = m;
        centimeters = cm;
    }
    friend Distance operator+(const Distance &d1, const Distance &d2);
    void displayDistance()
    {
        cout << "Meters:" << meters << "\t"
             << "Centimeters:" << centimeters << endl;
    }
};

Distance operator+(const Distance &d1, const Distance &d2)
{
    Distance temp;
    temp.centimeters = d1.centimeters + d2.centimeters;
    temp.meters = d1.meters + d2.meters + (temp.centimeters / 100);
    temp.centimeters = temp.centimeters % 100;
    return temp;
}

int main()
{
    Distance d1(3, 12), d2(1, 99), d3;
    d3 = d1 + d2;
    d3.displayDistance();
    return 0;
}