/*
WAP using class and objects. Use the member function to initialize the class data members using outside the class definition
 */

#include <iostream>

using namespace std;

class Addition
{
public:
  int addition(int, int , int);
};

int Addition ::addition(int a=0, int b=0, int c=0){
    return a+b+c;
}

int main()
{
    Addition addme;
    cout << addme.addition() << endl;
    cout << addme.addition(1) << endl;
    cout << addme.addition(1, 2) << endl;
    cout << addme.addition(1, 2, 3) << endl;
    return 0;
}