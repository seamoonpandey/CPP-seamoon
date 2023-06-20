/* WAP to add private data of two different classes using friend function /non member function. */

#include <iostream>
using namespace std;

class ClassA;
class ClassB
{
private:
    int numA;

public:
    ClassB(int x)
    {
        numA = x;
    }
    friend int adder(ClassA, ClassB);
};

class ClassA
{
private:
    int numB;

public:
    ClassA(int x)
    {
        numB = x;
    }
    friend int adder(ClassA, ClassB);
};

int adder(ClassA objA, ClassB objB)
{
    return objA.numB + objB.numA;
}

int main()
{
    ClassA one(3);
    ClassB two(6);
    cout<<adder(one, two)<<endl;;

    return 0;
}