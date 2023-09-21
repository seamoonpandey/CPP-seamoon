#include <iostream>
using namespace std;

class Complex{
    private:
    int real,imaginary;
    public:
    Complex(int x, int y) : real(x), imaginary(y){}
    Complex() : real(0), imaginary(0){}
    void display(){
        if(imaginary>0){
            cout<<real<<"+"<<imaginary<<"j"<<endl;
        }else{

            cout<<real<<imaginary<<"j"<<endl;
        }
    }
    //postfix
    Complex operator++(int){
        //Complex temp;
        //temp.real = real++;
        //temp.imaginary = imaginary++;
        //return temp;

        //return {real++, imaginary++};

        return Complex(real++, imaginary++);
    }
    //prefix
    Complex& operator++(){
        real++;
        imaginary++;
    }

    Complex operator -(const Complex& x){
        return {real - x.real, imaginary - x.imaginary};
    }
};

int main(){
    Complex one(1,1);
    one.display();
    Complex two = one++;
    ++one;
    two.display();
    one.display();
    Complex three = two - one;
    three.display();
}