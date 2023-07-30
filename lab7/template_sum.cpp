/*
WAP to add two integers and two float values using function template
*/

#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b){
    return (a+b);
}

int main(){
    int intSum = add(3,5);
    float floatSum = add(2.1,3.0);

    cout<<"Integer\t:"<<intSum<<endl;
    cout<<"Float\t:"<<floatSum<<endl;
    return 0;

}