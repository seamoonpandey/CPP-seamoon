#include<iostream>
using namespace std;

/* 
private means we can just access them inside the class
and public means we can even access them by calling them
 */
class Student{
    private:
    int rollNo,age;
    string name;
    float marks;

    public:
    void readData(){
        cout<<"Enter roll number : ";
    cin>>rollNo;
    cout<<"Enter the name : ";
    cin>> name;
    cout<<"Enter the age : ";
    cin>>age;
    cout<<"Enter the marks obtained : ";
    cin>> marks;
    }

    void displayData(){
        cout<<name<<" "<<"of age"<<" "<<age<<" "<<"and roll no"<<" "<<rollNo<<" "<<"obtained"<<" "<<marks<< " "<<"marks."<<endl;
    } 
};

int main(){
    Student student;
    student.readData();
    student.displayData();
};