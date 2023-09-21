# Past Questions Solutions

## Question Number One

___

 **1. Explain the basic concept of Object Oriented Programming. Compare C with C++.**

**Answer :**
The basic concept of Object Oriented Programming is centered around the concept of Object, which  is a kind of module containing data and subroutines(methods or functions). An object is a kind of self contained entity that has an internal state and that can respond to message. Object Oriented Programming treats data as a critical element in the program development and does not allow the free flow of the data through the program which emphasizes the concepts of data abstraction and encapsulation. It ties the data more closely with the functions that operate on the data and thus protects it from accidental manipulation from the other part of the program.

Object Oriented Programming is a powerful paradigm. The designer can specify the data and methods that can be used over the data. This pairing of data and methods that can be applied on it is called object. In this way a program becomes a collection of cooperating objects, rather than a list of procedures.

Object Oriented paradigm can be more handy in case of more complex and bigger designing of real-world applications. For example, if we need a bank management system then we need to store multiple data of multiple objects like customers, employees, trustees, and each of them with balances and other minor details. The background process in such cases are vulnerable and must be hidden and protected from unauthorized access so by concept of objects, data abstraction and encapsulation such problems can be tackled in a simpler manner than a structural method.

**Answer :**
Certainly, here's a table comparing C with C++:

| **Aspect** | **C** | **C++** |
|------------|-------|---------|
| **Paradigm** | Procedural Programming | Object-Oriented Programming (OOP) with support for procedural programming |
| **Data Handling** | Uses simple data types and structures to store and manipulate data. | Introduces classes and objects to encapsulate data and behavior. Allows the creation of user-defined data types through classes. |
| **Functions** | Mainly relies on functions for code organization. | Supports functions and methods (member functions) within classes for code organization. |
| **Code Reusability** | Limited code reusability through functions and libraries. | Promotes code reusability through inheritance and polymorphism. Allows for the creation of reusable classes and libraries. |
| **Encapsulation** | Limited support for encapsulation. Data and functions are separate. | Strong support for encapsulation. Data and functions can be bundled together within classes, providing better data security and organization. |
| **Inheritance** | Does not support inheritance. | Supports inheritance, allowing the creation of new classes based on existing ones. Facilitates code reuse and hierarchy. |
| **Polymorphism** | Limited support for polymorphism through use of function pointers and data structures that mimic objects. | Supports polymorphism through function overloading and virtual functions. Enables dynamic behavior at runtime. |
| **Memory Management** | Manual memory management using functions like `malloc` and `free`. | Provides features like constructors and destructors for automatic memory management using the RAII (Resource Acquisition Is Initialization) principle. |
| **Standard Libraries** | Has standard libraries like `<stdio.h>` and `<stdlib.h>`. | Has standard libraries like `<iostream>`, `<vector>`, and `<string>`, offering a wide range of features for modern development. |
| **Complexity** | Generally simpler and closer to hardware. | Offers higher-level abstractions due to OOP features, making it suitable for more complex projects. |
| **Usage** | Widely used for system-level programming and embedded systems. | Preferred for application development, game development, and larger software projects due to OOP features. |

**2. What are the drawback of procedural programming and advantages of object oriented programming. With a program code differentiate between procedure object oriented programming and object oriented programming.**

**Answer :**
Drawback of Procedural programming:
    - Difficult to maintain for larger code
    - Code reusability is the main standing feature of OOP which is better than procedural programming
    - Difficult to relate with real-world objects
    - It is difficult to hide data
    - Importance is given to the procedure rather than data which might be essential in some cases

Advantages of Object Oriented programming:
    - Easier to maintain larger and complex code
    - Better code reusability with the means of objects
    - User can self-defined new data type as class
    - Data can be hidden since it doesn't allow the data to flow throughout the program
    - Maintenance cost is lesser than that of POP
    - Has a better scalability meaning it can be upgraded from small to large and complex systems easily

**Answer :**
To differentiate between object oriented programming and procedural programming with the help of code we can use an example of Area of rectangle in C and C++.

Procedural programming in C:

```C++
#include <stdio.h>

int Area(int x, int y){
    return x*y;
}

int main(){
    int length, breadth;
    printf("Enter length and breadth in order with a space");
    scanf("%d %d", &length,&breadth);
    printf("The area is %d",Area(length,breadth));
    return 0;
}
```

Object Oriented programming in C++:

```C++
#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;
    
    public:
    Rectangle(int x, int y):length(x),breadth(y) {}
    void Area(){
        cout<<length*breadth<<endl;
    }
};

int main(){
    Rectangle r(5,10);
    r.Area();
    return 0;
}

```

In the given examples we used procedural and object oriented approach for a same problem to find the area of a rectangle. This is a minor case we started to make a program. If we further do the task like calculating the area of other shapes too we need to rechange the POP for each and every case but in case of OOP we can just make another class Shape and give the basic properties to it and derive subclasses as other shapenames and then do the calculations.

**3. What are the limitation of Procedural programming over object oriented programming. What is encapsulation? What are its advantages?**

**Answer :**
The limitations of Procedural programming over object oriented programming are:
    - Difficult to maintain for larger code
    - Code reusability is the main standing feature of OOP which is better than procedural programming
    - Difficult to relate with real-world objects
    - It is difficult to hide data
    - Importance is given to the procedure rather than data which might be essential in some cases

**Answer :**
Encapsulation refers to the act of binding data and methods that can be applied in the data together and also hide or prevent the data from unauthorized access from other parts of the program. The data is hidden within an object.

The advantages of encapsulation are:
    - Encapsulation allows to hide the internal state of an object by specifying access modifiers.
    - Encapsulation helps in better organization of code for larger models and applications
    - Aids in unit testing. This allows the programmer to test the class in isolation without changing almost anything in the previous code
    - By encapsulation we can make reusable components.

**4. WAP to multiply two complex numbers using object oriented approach.**

```C++
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    Complex multiply(const Complex& other) {
        double resultReal = (this->real * other.real) - (this->imaginary * other.imaginary);
        double resultImaginary = (this->real * other.imaginary) + (this->imaginary * other.real);
        return Complex(resultReal, resultImaginary);
    }

    void display() {
        cout << "Result: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    double real1, imaginary1, real2, imaginary2;

    cout << "Enter the real and imaginary parts of the first complex number: ";
    cin >> real1 >> imaginary1;

    cout << "Enter the real and imaginary parts of the second complex number: ";
    cin >> real2 >> imaginary2;

    Complex num1(real1, imaginary1);
    Complex num2(real2, imaginary2);

    Complex result = num1.multiply(num2);

    result.display();

    return 0;
}

```

**5.What are the main features of Object Oriented Programming? Would you consider OOP better than structured programming? If you do, what makes it better? Write down its advantages and disadvantages.**

**Answer :**
The main features of OOP are:

- Objects
- Class
- Encapsulation
- Data abstraction
- Polymorphism
- Inheritance
- Message Passing

For small, simple and straightforward programs structured programming can be better since it provides more simplicity and efficiency. For bigger programs OOP can be favored over structured programming due to its features like encapsulation and objects make it easy to maintain the complex structure of the data model. The scalability of OOP makes it better in most aspects that is required in the real world applications. It also supports data hiding and protection which cannot be easily offered in the structural programming. OOP helps to provide data abstraction which helps us to provide with a informative interface without revealing the background process or operations. OOP provides better modeling in comparison to the POP due to the objects.

Advantages of OOP:

- Easy to maintain large and complex code base
- Allows to hide the data and prevents unauthorized access to the data from other parts of the program
- Users can create self-defined data type with their own methods of operation
- Modularity is better due to the object instances which enhances the code divisibility further
- The code can be easily scaled up without affecting the previously existing code
- Better exception handling and debugging

Disadvantages of OOP:

- Programs in OOP can be more complex and difficult to design
- Programs in OOP must be preplanned with all the necessary models just to initialize
- Programs in OOP are slightly slower since there is a lot of process in the background
- Takes more size for the program since the objects are allocated some address in the memory for the execution
- It is not so beginner friendly

**5. Write a suitable example of importance of  object as function argument and returning object.**

**Answer :**
Suppose we're building a simple banking system with customer accounts. We can create a BankAccount class to represent individual bank accounts. Here's how object-oriented principles come into play:

```C++
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount;
    }

    // Function to withdraw money from the account
    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true; // Successful withdrawal
        }
        return false; // Insufficient balance
    }

    // Function to get the current balance
    double getBalance() const {
        return balance;
    }
};

// Function to transfer money from one account to another
BankAccount transferFunds(const BankAccount& fromAccount, BankAccount& toAccount, double amount) {
    if (fromAccount.withdraw(amount)) {
        toAccount.deposit(amount);
    }
    return fromAccount; // Return the updated source account
}

int main() {
    BankAccount aliceAccount("12345", 1000.0);
    BankAccount bobAccount("67890", 500.0);

    cout << "Alice's initial balance: " << aliceAccount.getBalance() << endl;
    cout << "Bob's initial balance: " << bobAccount.getBalance() << endl;

    double transferAmount = 300.0;
    BankAccount updatedAliceAccount = transferFunds(aliceAccount, bobAccount, transferAmount);

    cout << "Alice's updated balance after transfer: " << updatedAliceAccount.getBalance() << endl;
    cout << "Bob's updated balance after transfer: " << bobAccount.getBalance() << endl;

    return 0;
}

```

This example demonstrates how objects can be used as function arguments and return values to model real-world interactions and maintain the integrity of data within the objects.

**6. WAP to find the transpose of given matrix using the concept of OOP.**

```C++
/*
This program features calculation of transpose of matrix using the concepts of matrix
*/

//preprocessor directives
#include <iostream>

using namespace std;

//declaration of Matrix class
class Matrix{
    //make the data private
    private:
    int rows,columns;//number of rows and columns
    int **data;//data in the matrix array
    public:
    //constructor with the rows and columns size of the matrix
    Matrix(int rows, int column):rows(rows),columns(columns) {
        //we make a pointer array to point through the row of the matrix
        data = new int*[rows];
        for(int i = 0 ; i < rows ; i++){
            //here we do not use the aestrik "*" operator for the columns because we do not need to allocate memory for that as it is the part of the row.
            data[i] = new int[columns]; // here data[i] points to the the initial value of the pointer in the rows array
        }
    }

    //getter
    void getMatrix(){
        cout<<"Enter Matrix elements"<<endl;
        for(int i = 0;i<rows ;i++){
            for(int j = 0;j<columns;j++){
                cin>>data[i][j];
            }
        }
    }
    //printer
     void printMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
     }
     
     Matrix transpose(){
        Matrix temp(columns,rows);

        for(int i = 0; i < rows;i++){
            for(int j = 0; j < columns;j++){
                temp.data[j][i] = data[i][j];
            }
        }
        return temp;
     }
    //we need to destroy the allocated memory
    ~Matrix(){
        for(int i = 0 ; i < rows; i++){
            //this loop deletes each and every data inside the array
            delete[] data[i];
        }
        delete[] data; //this deletes the array itself
    }
};

int main(){
    int r,c;
    cout<<"Enter the number rows X columns"<<endl;
    cin>>r>>c;
    Matrix mat1(r,c);
    mat1.getMatrix();
    mat1.printMatrix();
    Matrix mat2 = mat1.transpose();
    mat2.printMatrix();
    return 0;
}


```
