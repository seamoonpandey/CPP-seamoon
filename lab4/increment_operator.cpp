/* WAP to overload increment operator using member funtion. */

#include <iostream>
using namespace std;

class Increment
{
private:
    int count;

public:
Increment(int initial=0){
    count=initial;
}
    Increment operator++()
    {
        Increment temp;
        temp.count = ++count;
        return temp;
    }
    void print() { cout << count << endl; }
};
int main()
{
    Increment inc;
    inc.print();
    ++inc;
    inc.print();

    return 0;
}
