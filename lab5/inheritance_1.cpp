/*
WAP to implement some forms of inheritance type 1
 */

#include <iostream>

using namespace std;

class Parent1
{
private:
    string name, address;

public:
    void getData()
    {
        cout << "Enter name:";
        getline(cin, name);
        cout << "Enter address";
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
        cout << "Enter phone number: ";
        cin >> phone;
        cout << "Enter rollNo: ";
        cin >> rollNo;
    };
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
    void takeData()
    {
        cout << "Age: ";
        cin >> age;
    };
    void display()
    {
        cout << "Age: " << age << endl;
        ;
    };
};
int main()
{
    Child2 test;
    test.getData();
    test.get();
    test.takeData();
    test.putData();
    test.put();
    test.display();
}