/* WAP to function override */

#include <iostream>
using namespace std;

class Person
{
private:
    string name;

public:
    void getter()
    {
        cout << "Your name";
        cin >> name;
    }
    void print()
    {
        cout << "Name \t" << name << endl;
    }
};

class Hancy : public Person
{
private:
    int age;

public:
    void getter()
    {
        Person::getter();
        cout << "Age :";
        cin >> age;
    }
    void print()
    {
        Person::print();
        cout << "Age is just a number" << endl;
    }
};

int main()
{
    Hancy hancy;
    hancy.getter();
    hancy.print();
}