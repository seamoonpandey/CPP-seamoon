/* WAP to implement runtime polymorphism */

#include <iostream>

using namespace std;

class Base {
public:
  virtual void show() {
    cout << "Base::show()" << endl;
  }
};

class Derived : public Base {
public:
  void show() {
    cout << "Derived::show()" << endl;
  }
};

int main() {
  Base *b = new Derived();
  b->show();

  delete b;
  return 0;
}


// Discussion

/*
This program defines two classes: Base and Derived. The Base class has a virtual function called show(). The Derived class inherits from the Base class and overrides the show() function.
In the main function, a pointer of type Base is created and assigned to a new object of the Derived class. The show() function is called on the pointer. Since the pointer is of type Base, the Base version of the show() function is called.
The delete operator is then used to delete the object that the pointer points to.
*/