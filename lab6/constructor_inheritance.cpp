/*
WAP to illustrate the working of constructor in single and multiple inheritances
*/


#include<iostream>
using namespace std;

// Single inheritance
class Base {
public:
  Base() {
    cout << "Inside Base constructor" << endl;
  }
};

class Derived : public Base {
public:
  Derived() {
    cout << "Inside Derived constructor" << endl;
  }
};

// Multiple inheritance
class A {
public:
  A() {
    cout << "Inside A constructor" << endl;
  }
};

class B {
public:
  B() {
    cout << "Inside B constructor" << endl;
  }
};

class C : public A, public B {
public:
  C() {
    cout << "Inside C constructor" << endl;
  }
};

int main() {

  Derived d;
  C c;

  return 0;
}

// Discussion
/*
We illustrated the single and multiple inheritance in C++. In single inheritance, the base class constructor is called first, followed by the derived class constructor. In multiple inheritance, the base classes constructors are called first, in the order in which they are inherited, followed by the derived class constructor.

The order in which the constructors are called is important because it determines the order in which the members of the base classes are initialized. For example, if the `Base` class has a member variable `x`, and the `Derived` class has a member variable `y`, the value of `x` will be initialized before the value of `y`.

It is also important to note that the constructors of the base classes cannot access the members of the derived class. This is because the constructors are called before the derived class is fully initialized.

*/