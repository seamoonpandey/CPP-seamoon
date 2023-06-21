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

    Pointer *getInstance()
    {
        return this;
    }
};

int main()
{
    Pointer p(10);
    Pointer *ptr = p.getInstance();
    cout << "Value of x: " << ptr->x << endl;

    return 0;
}
