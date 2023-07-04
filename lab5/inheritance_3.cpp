/*
WAP to implement some forms of inheritance type 3
 */

#include <iostream>

using namespace std;

class Student
{
private:
    int roll;

public:
    void get()
    {
        cout << "Roll No: ";
        cin >> roll;
    }
    void put()
    {
        cout << "Roll No is :" << roll << endl;
    }
};

class Test : virtual public Student
{
private:
    string name;

public:
    void get()
    {
        getline(cin, name);
    }
    void put()
    {
        cout << "Name is :" << name << endl;
    }
};
class Sports : virtual public Student
{
private:
    int age;

public:
    void get()
    {
        cout << "Age is :";
        cin >> age;
    }
    void put()
    {
        cout << "Age is : " << age << endl;
    }
};
class Result : Test, Sports
{
private:
    double fee;

public:
    void get()
    {
        Student::get();
        Test::get();
        Sports::get();
        cout << "Input fee: ";
        cin >> fee;
    }
    void put()
    {
        Student::put();
        Test::put();
        Sports::put();
        cout << " Input fee is :" << fee << endl;
    }
};

int main()
{
    Result res;
    res.get();
    res.put();
    return 0;
}