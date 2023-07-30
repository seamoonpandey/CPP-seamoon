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
In this program we just illustrated a instance of exception handling with the cpp classes.
Here we made a class Divider and a method for divider divide which divides the two given numbers and prints.
There we use a throw keyword to put a string if the denominator is zero.

In main function we create two constructors one with invalidness and one correct and put them in different try catch block, so that our app didn't crash.
*/