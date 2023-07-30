//WAP to overload template functions

#include <iostream>
using namespace std;


template<typename T>
T add(T a, T b){
    return (a+b);
}

template<typename T>
T add(T a, T b, T c){
    return a+b+c;
}

int main(){
    int intSum = add(3,5);
    float floatSum = add(2.1,3.0);

    int intSum2 = add(1,2,3);
    float floatSum2 = add(1.1,2.2,3.3);

    cout<<"Integer\t:"<<intSum<<endl;
    cout<<"Float\t:"<<floatSum<<endl;
    cout<<"Integer2\t:"<<intSum2<<endl;
    cout<<"Float2\t:"<<floatSum2<<endl;
    return 0;

}