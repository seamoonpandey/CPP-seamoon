#include <iostream>
using namespace std;

class Distance
{
private:
    int inches, feet;

public:
    Distance(int feet, int inches)
    {
        this->feet = feet;
        this->inches = inches;
    }

    float toMeter()
    {
        return (feet + (inches / 12)) / 3.280833;
    }
};

int main()
{
    Distance dist(32, 11);
    float meter = dist.toMeter();
    cout << meter << endl;

    return 0;
}
