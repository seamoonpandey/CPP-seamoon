#include<iostream>
using namespace std;

enum Gender {female, male};

// Single inheritance if derived only one class this also is an example of heirarchical inheritance
class Person {
    protected:
        string name;
        int age;
        Gender gender;
    public:
        Person(string n , int a, Gender g) : name(n), age(a), gender(g) {}
};

class Employee : public Person {
    protected:
        string department, post;
    public:
        Employee(string n, int a, Gender g, string d, string p) : Person(n, a, g), department(d), post(p) {}
        
        void display(){
            cout<<endl<<"Employee details"<<endl<<endl;
            cout<<endl<<name<<endl<<age<<endl<<gender<<endl<<department<<endl<<post<<endl<<endl;
        }
};
class HR : public Person {
    protected:
        string department;
    public:
        HR(string n, int a, Gender g, string d) : Person(n, a, g), department(d) {}
        
        void display(){
            cout<<endl<<"HR details"<<endl<<endl;
            cout<<endl<<name<<endl<<age<<endl<<gender<<endl<<department<<endl<<endl;
        }
};

int main() {
    Employee one("John",10,male,"Computer","Technical Head");
    one.display();
    HR two("John",10,male,"Computer");
    two.display();
    return 0;
}
