/* WAP to illustrate the use of this pointer */

#include<iostream>
using namespace std;

class Person{
    private:
    int age;
    string name;
    public:
    Person(string name,int age ){
        this->age=age;
        this->name=name;
    }
    void display(){
        cout<<"Name:"<<this->name<<endl<<"Age:"<<this->age<<endl;
    }
};

int main(){
    Person person("John Doe",32);
    person.display();
}