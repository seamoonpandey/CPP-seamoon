#include<iostream>
using namespace std;

int main(){
    int rollNo,age;
    string name;
    float marks;
    cout<<"Enter roll number : ";
    cin>>rollNo;
    cout<<"Enter the name : ";
    cin>> name;
    cout<<"Enter the age : ";
    cin>>age;
    cout<<"Enter the marks obtained : ";
    cin>> marks;

    cout<<name<<" "<<"of age"<<" "<<age<<" "<<"and roll no"<<" "<<rollNo<<" "<<"obtained"<<" "<<marks<< " "<<"marks."<<endl;
    return 0;
}