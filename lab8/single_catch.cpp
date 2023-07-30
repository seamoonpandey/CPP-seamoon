#include <iostream>
using namespace std;

class Divider {
private:
    double numerator, denominator;

public:
    Divider(double x, double y) : numerator(x), denominator(y) {}
    void divide() {
        if (denominator == 0) {
            throw "Division by zero";
        }
        cout << numerator / denominator << endl;
    }
};

int main() {
    // we can make the class data user input too
        Divider d(10, 0),e(10,10);
    try {
        d.divide();
    }
    catch (const char* exception) {
        cout << "Exception caught: " << exception << endl;
    }
    try {
        e.divide();
    }
    catch (const char* exception) {
        cout << "Exception caught: " << exception << endl;
    }

    return 0;
}


/*
In this program we just illustrated a instance of exception handling with the cpp classes.
Here we made a class Divider and a method for divider divide which divides the two given numbers and prints.
There we use a throw keyword to put a string if the denominator is zero.

In main function we create two constructors one with invalidness and one correct and put them in different try catch block, so that our app didn't crash.
*/