# Lab7

## Questions

* WAP to add two integers and two float values using function template

* WAP to overload template functions

* WAP to overload template functions with ordinary functions

* WAP to implement class template

* WAP to implement class template with multiple template parameters

## Theory

### Function Templates

Function templates allow you to create a generic function that can work with different data types without having to write separate functions for each type. It is defined using the template keyword followed by a list of template parameters enclosed in angle brackets <>. These template parameters represent the generic data types that the function can accept.

When you call a function template with specific data types, the compiler automatically generates the appropriate function instance by substituting the template parameter with the provided data type. This process is called template instantiation.

syntax :

```cpp
template <typename T>
ReturnType FunctionName(T parameter1, T parameter2, ...) {
    // Function implementation
}
```

### Class Templates

When you create an object of a class template with a specific data type, the compiler generates a specialized version of that class for that data type. This process is called template instantiation.

### Template Specialization

Sometimes, you may need to provide a specialized implementation for a specific data type. This is known as template specialization. It allows you to override the generic template implementation for a specific data type.

Templates enable generic programming in C++, making your code more flexible and adaptable to different data types. They are commonly used in standard library containers like std::vector, std::list, etc., to provide a generic interface to store and manipulate data of various types.
