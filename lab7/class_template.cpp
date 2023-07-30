// WAP to implement class template

#include <iostream>
using namespace std;

template <typename T>
class Container{
    private:
        T value;
    public:
        Container(T val){
            value = val;
        }
        T getValue(){
            return value;
        }

};

int main(){

    /*
    this explicit type cast is for the template to run if we simply ignore that the compiler will fail to deduce the data type of T with just 1 so it will throw error
    */ 
    Container<int> X(1);
    cout<<X.getValue()<<endl;
}