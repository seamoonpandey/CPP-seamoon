// WAP to overload template functions with ordinary functions

#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b){
    return (a+b);
}

// ordinary function overloading for if different params

float add(int a, float b){
    return a+b;
}
float add(float a, int b){
    return a+b;
}

int main(){
    int intSum = add(3,5);

    float randomSum = add(1,1.2);

    cout<<"Integer\t:"<<intSum<<endl;
    cout<<"Random\t:"<<randomSum<<endl;

    return 0;

}

/*    The program overloads the template add function with a regular function for adding two float values.
    When float values are passed, the overloaded function is used instead of the generic template.
    Illustrates how template functions can be combined with ordinary functions for specific cases.*/