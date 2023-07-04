#include <iostream>

using namespace std;

class Parent1
{
private:
    string name, address;

public:
    Parent1(string name, string address)
    {
        this->name = name;
        this->address = address;
    }

    void putData()
    {
        cout << "Name: " << name << endl
             << "Address: " << address << endl;
    };
};

class Child1 : public Parent1
{
private:
    string rollNo, phone;

public:
    Child1(string name, string address, string rollNo, string phone)
        : Parent1(name, address)
    {
        this->rollNo = rollNo;
        this->phone = phone;
    }

    void put()
    {
        cout << "Roll No: " << rollNo << endl
             << "Phone: " << phone << endl;
    };
};

class Child2 : public Child1
{
private:
    int age;

public:
    Child2(string name, string address, string rollNo, string phone, int age)
        : Child1(name, address, rollNo, phone)
    {
        this->age = age;
    }

    void display()
    {
        cout << "Age: " << age << endl;
        ;
    };
};

int main()
{
    Child2 test("John Doe", "123 Main Street", "1234567890", "123456", 30);
    test.putData();
    test.put();
    test.display();
}
