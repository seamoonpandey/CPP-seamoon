#include <iostream>
using namespace std;

class Distance
{
private:
    int meters, centimeters;

public:
    Distance(int meters = 0, int centimeters = 0) {
        this->meters = meters;
        this->centimeters = centimeters;
    }

    Distance operator+(Distance &distance) {
        Distance temp;
        temp.centimeters = centimeters + distance.centimeters;
        temp.meters = meters + distance.meters + (temp.centimeters / 100);
        temp.centimeters = temp.centimeters % 100;
        return temp;
    }

    void displayDistance()
    {
        cout << "Meters:" << meters << "\t"
             << "Centimeters:" << centimeters << endl;
    }
};


int main() {
    Distance d1(3, 12), d2(1, 99), d3;
    d3 = d1 + d2;
    d3.displayDistance();
    return 0;
}
