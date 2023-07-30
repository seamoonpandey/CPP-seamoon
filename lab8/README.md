# Lab8 - Exception Handling in C++

## Questions

### 1. WAP to illustrate exception handling

In this program, we will demonstrate the concept of exception handling. We will use `try`, `catch`, and `throw` blocks to handle runtime errors and exceptional situations gracefully.

### 2. WAP to illustrate exception handling using a single catch statement

In this program, we will use a single catch statement to catch exceptions of different types in one catch block. This approach can be useful when we want to handle multiple exceptions in the same way.

### 3. WAP to illustrate exception handling using multiple catch statements

In this program, we will use multiple catch statements to handle different types of exceptions separately. This allows for more fine-grained control over how each type of exception is handled.

## Theory

### Exception Handling

Exception handling in C++ allows us to handle runtime errors and exceptional situations gracefully. It helps in separating error-handling code from the normal flow of the program, making the code more robust.

When an exceptional situation occurs in the `try` block, the program can `throw` an exception. The `throw` statement allows us to raise an exception of a specific type. The program execution is then transferred to the nearest matching `catch` block.

The `catch` block catches the thrown exception and executes the code inside the block. It can handle the exception, perform necessary cleanup, and provide meaningful error messages.

#### Single Catch Statement

Using a single catch statement, we can catch exceptions of different types in one catch block. This approach can be useful when we want to handle multiple exceptions in the same way.

#### Multiple Catch Statements

With multiple catch statements, we can handle different types of exceptions separately. This allows for more fine-grained control over how each type of exception is handled.

## Conclusion

In this lab, we will explore the powerful exception handling mechanism in C++. We will use `try`, `catch`, and `throw` blocks to handle runtime errors and exceptional situations. We will demonstrate both the single catch statement approach and multiple catch statements approach for handling different types of exceptions. Let's proceed with the implementation of the programs to gain a better understanding of these concepts.
