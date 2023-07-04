#include <iostream>
using namespace std;

class Parent1
{
protected:
    string name, address;

public:
    void getData()
    {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
    };
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
    void get()
    {
        Parent1::getData();
        cout << "Enter rollNo: ";
        cin >> rollNo;
        cout << "Enter phone number: ";
        cin >> phone;
        getchar();
    };
    void put()
    {
        Parent1::putData();
        cout << "Roll No: " << rollNo << endl
             << "Phone: " << phone << endl;
    };
};

class Child2 : public Parent1
{
private:
    int age;

public:
    void get()
    {
        Parent1::getData();
        cout << "Age: ";
        cin >> age;
        getchar();
    };
    void put()
    {
        Parent1::putData();
        cout << "Age: " << age << endl;
    };
};

int main()
{
    Child1 test1;
    test1.get();
    test1.put();

    Child2 test2;
    test2.get();
    test2.put();

    return 0;
}
