#include <iostream>
using namespace std;

class Length{
    private:
    int meter, centimeter;
    public:
    //constructor
    Length(int m = 0, int cm = 0): meter(m), centimeter(cm){}

    friend void operator>>(istream &, Length &);
    friend void operator<<(ostream &, Length &);
    
    friend Length operator+(Length &,Length &);
    friend Length operator-(Length &,Length &);
    
    friend Length operator++(Length &,int);//postfix operator
    friend Length operator--(Length &,int);

    friend Length operator++(Length &);//prefix operator
    friend Length operator--(Length &);
};

void operator>>(istream &in, Length &l){
    cout<<"Enter the length"<<endl;
    cout<<"Meters = ";
    in>>l.meter;
    cout<<"Centimeter = ";
    in>>l.centimeter;
    cout<<endl;
}

void operator<<(ostream &out, Length &l){
    out<<"The length is "<<l.meter<<"m "<<l.centimeter<<"cm"<<endl;
}

Length operator+( Length &l,  Length &b){
    int meter = l.meter+b.meter;
    int centimeter = l.centimeter+b.centimeter;
    if(centimeter>=100){
        meter++;
        centimeter-=100;
    }
    return Length(meter,centimeter);
}

Length operator-( Length &l, Length &b ){
    int meter = l.meter-b.meter;
    int centimeter = l.centimeter - b.centimeter;
    if(centimeter<0){
        meter--;
        centimeter+=100;
    }
    return Length(meter,centimeter);
}

Length operator++(Length &l,int){
    return Length(l.meter++,l.centimeter++);
}

Length operator--(Length &l,int){
    return Length(l.meter--,l.centimeter--);
}

Length operator++(Length &l){
    l.meter++;
    l.centimeter++;
    return Length(l.meter,l.centimeter);
}

Length operator--(Length &l){
    l.meter--;
    l.centimeter--;
    return Length(l.meter,l.centimeter);
}

int main(){
    cout<< endl<<"Dude it works!"<<endl;
    cout<<endl<<"Hajimari Hajimari!"<<endl;
test for << and >> operator
    Length l;
    cin>>l;
    cout<<l;
//test for + operator
    Length l(100,10),b(1,99),perimeter;
    perimeter = l+b;
    cout<<perimeter;
//test for - operator
    Length l(22,98),b(10,99),difference;
    difference = l-b;
    cout<<difference;
//test for ++ postfix operator
    Length l(100,10);
    Length x = --l;
    cout<<x;
    cout<<l;

    return 0;
}