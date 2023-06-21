/* Repeat the this poiter question with a friend function. */

#include <iostream>

using namespace std;

class Pointer
{
public:
    int x;

    Pointer(int x)
    {
        this->x = x;
    }

    friend Pointer* getInstance(Pointer& p);
};

Pointer* getInstance(Pointer& p)
{
    return &p;
}

int main()
{
    Pointer p(10);
    Pointer* ptr = getInstance(p);
    cout << "Value of x: " << ptr->x << endl;

    return 0;
}
