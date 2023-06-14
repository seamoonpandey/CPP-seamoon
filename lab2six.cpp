/* WAP to illustrate working of constructor and destructor. Use appropriate cout statements and blocks to show the sequence of object construction and destruction. */

#include <iostream>

using namespace std;

class Sample
{
public:
    Sample()
    {
        cout << "Default constructor called" << endl;
    }
    Sample(int value)
    {
        cout << "Parametrized constructor called with value" << value << endl;
    }
    Sample(const Sample &other)
    {
        cout << "Copy constructor called." << endl;
    }
    Sample(Sample &&other) noexcept
    {
        cout << "Move constructor called." << endl;
    }
    ~Sample()
    {
        cout << "Destroyed object" << endl;
    }
};

int main()
{
    Sample object1;
    Sample object2(100);
    Sample object3(object2);
    Sample object4(move(object3));
    return 0;
}