#include <iostream>
using namespace std;


class Complex{
    private:
    float real, imaginary;
    public:
    Complex(float x=0, float y=0):real(x), imaginary(y){}

    Complex operator+(const Complex& c){
        return Complex(real+c.real,imaginary+c.imaginary);
    }
    Complex operator-(const Complex& c){
        return Complex(real-c.real,imaginary-c.imaginary);
    }
    //prefixed operator
    Complex operator++(){
        real++;
        imaginary++;
        return Complex(real,imaginary);
    }
    Complex operator--(){
        real--;
        imaginary--;
        return Complex(real,imaginary);
    }
    //postfixed operator
     Complex operator++(int){
        return Complex(real++,imaginary++);
    }
    Complex operator--(int){
        return Complex(real++,imaginary++);
    }
    void display(){
       if(imaginary>0){
         cout<<real<<" + "<<imaginary<<"i"<<endl;
       }else{
         cout<<real<<" "<<imaginary<<"i"<<endl;
       }
    }


};


int main(){
    Complex one(1,4),two(2.5,11),three;
    three = one-two;
    three.display();
    Complex four = ++three;
    three.display();
    four.display();
    Complex five = four++;
    five.display();
    four.display();
    return 0;
}