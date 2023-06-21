/* WAP to convert meter into  a type of class Distance with data members feet and inches. */
//meter to feet =m*3.280833


#include<iostream>
using namespace std;

class Distance{
    private:
    int inches,feets;
    public:
    Distance(int feets,int inches){
        this->feets=feets;
        this->inches=inches;
    }
    void displayDistance()
    {
        cout << "Feet: " << feets << "\t"
             << "Inches: " << inches << endl;
    }

     Distance conversion(double meters)
    {
        int inches=(int)meters*3.280833*12;
        int feets=inches/12;
        inches=inches%12;
        return Distance(feets, inches);
    }

};

int main()
{
    int meter = 1;
    Distance distance = distance.conversion(meter);
    distance.displayDistance();

    return 0;
}