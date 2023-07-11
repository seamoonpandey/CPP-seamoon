/*
Add destructor to the first program.
*/

#include <iostream>
using namespace std;
class Base {
public:
  Base() {
    cout << "Inside Base constructor" << endl;
  }

  ~Base() {
    cout << "Inside Base destructor" << endl;
  }
};

class Derived : public Base {
public:
  Derived() {
    cout << "Inside Derived constructor" << endl;
  }

  ~Derived() {
    cout << "Inside Derived destructor" << endl;
  }
};

int main() {
  Derived d;
  return 0;
}


/*
The destructor for the Derived class is called before the destructor for the Base class. This is because the destructors are called in the reverse order of the constructors.
The destructor for the Derived class is responsible for deallocating any resources that were allocated by the constructor for the Derived object. In this case, there are no resources to deallocate, so the destructor simply prints a message.
The destructor for the Base class is also responsible for deallocating any resources that were allocated by the constructor for the Base object. In this case, there is one resource to deallocate: the memory that was allocated for the Base object itself. The destructor does this by calling the delete operator on the Base object.
*/