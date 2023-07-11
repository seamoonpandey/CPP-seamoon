# Lab6

1. WAP to illustrate the working of constructor in single and multiple inheritances
2. Add destructor to the first program and show the use of constructor and destructor
3. WAP to implement runtime polymorphism
4. WAP to illustrate the use of virtual destructors.

## Theory

### Constructors in Single and Multiple Inheritances in C++

In C++, a constructor is a special member function that is automatically called when an object of a class is created. The constructor is responsible for initializing the object's data members.

In single inheritance, a derived class inherits from a single base class. The constructors of the base class are called first, in the order in which they are inherited. Then, the constructor of the derived class is called.

For example, consider the following code:

```c++
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

int main() {
  Derived d;
  return 0;
}
```

### Destructors in C++

Destructors are always called in the reverse order of the constructors. Destructors can be called explicitly using the delete operator.The destructor is used to deallocate any resources that were allocated by the constructor for that object.

### Virtual destructors

A virtual destructor is a destructor that has the virtual keyword in its declaration.Virtual destructors are used to ensure that the correct destructor is called, regardless of the type of the pointer that is used to delete the object.Virtual destructors are important for preventing memory leaks.