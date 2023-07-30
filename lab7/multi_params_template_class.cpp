//WAP to implement class template with multiple template parameters

#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Adder {
private:
    T1 one;
    T2 two;
public:
    Adder(T1 val1, T2 val2) : one(val1), two(val2) {}

    T1 adder1() const {
        return one + two;
    }
    T2 adder2() const {
        return one + two;
    }
};

int main() {
    Adder<int, float> var1(1, 1.0);
    cout << var1.adder1() << endl;
    cout << var1.adder2() << endl;
    return 0;
}
