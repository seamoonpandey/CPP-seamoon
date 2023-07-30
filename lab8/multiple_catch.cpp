#include <iostream>
using namespace std;

class Indeterminate : public exception{
    public:
        const char* what() const throw(){
            return "Can't Divide by zero.";
        }
};

class NegativeError: public exception{
    public:
        const char* what() const throw(){
            return "Numbers shall not be negative";
        }
};

class Divider {
private:
    double numerator, denominator;

public:
    Divider(double x, double y) : numerator(x), denominator(y) {}
    void divide() {
        if (denominator == 0) {
            throw Indeterminate();
        }else if(numerator<0 || denominator<0){
            throw NegativeError();
        }
        cout << numerator / denominator << endl;
    }
};

int main() {
        Divider d(10, 0),e(-10,10);
    try {
        e.divide();
    }
    catch(const Indeterminate& ex0){
        cout<< "Indeterminate! "<<ex0.what()<<endl;
    }
    catch (const NegativeError& ex1) {
        cout << "Negative! " << ex1.what() << endl;
    }
    catch(const exception& ex2){
        cout<< "Exception caught:"<<ex2.what()<<endl;
    }

    return 0;
}


/*
In this program we just illustrated a instance of exception handling with the cpp classes with multiple catch blocks.
The code starts by defining two custom exception classes, DivisionByZeroException and NegativeNumberException, which are derived from the std::exception class. Each of these classes overrides the what() method, which returns a C-style string describing the respective exception.
class also has a member function divide(). In this function, the program checks for two conditions:

    If denominator is zero, it throws a DivisionByZeroException with the message "Error: Division by zero!"
    If either numerator or denominator is negative, it throws a NegativeNumberException with the message "Error: Negative number not allowed!"
    If none of the above conditions are met, it performs the division and displays the result.
        In the main() function, there are three blocks of code where the Divider class is used, each followed by a try-catch block.

    Block 1:
    It creates an instance of Divider called d1 with the arguments 10 and 0. It then calls the divide() function, which will throw a DivisionByZeroException since the denominator is zero. The catch block for DivisionByZeroException catches this exception and displays the corresponding error message.

    Block 2:
    It creates an instance of Divider called d2 with the arguments -5 and 2. It calls the divide() function, which will throw a NegativeNumberException since the numerator is negative. The catch block for NegativeNumberException catches this exception and displays the corresponding error message.

    Block 3:
    It creates an instance of Divider called d3 with the arguments 20 and 5. It calls the divide() function, which successfully performs the division and displays the result.
*/