/* WAP to illustrate the use of virtual destructors. */

#include <iostream>

using namespace std;

class Base {
public:
  virtual ~Base() {
    cout << "Base destructor called" << endl;
  }
};

class Derived : public Base {
public:
  virtual ~Derived() {
    cout << "Derived destructor called" << endl;
  }
};

int main() {
  Base *b = new Derived();
  delete b;

  return 0;
}


//Discussion

/*
This program defines two classes: Base and Derived. The Base class has a virtual destructor. The Derived class inherits from the Base class and overrides the destructor.
In the main function, a pointer of type Base is created and assigned to a new object of the Derived class. The delete operator is then used to delete the object that the pointer points to.
*/