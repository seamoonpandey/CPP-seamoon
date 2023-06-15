/* Define a class Box with private data members: length, breadth and height. Initialize its data members with some fixed values using a constructor. Use the object of that class and calculate volume of the box. */

#include <iostream>
using namespace std;

class Box
{
private:
    double length, breadth, height;

public:
    Box(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    double calculateVolume(){
        return length*breadth*height;
    }
};
int main(){
    Box randomBox(5,5,10);
    cout<<randomBox.calculateVolume()<<endl;
    return 0;
}