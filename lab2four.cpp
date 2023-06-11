/*
Create a class Customer with attributes customer name, product bought and paid amount. Create a  suitable methods to take and display the information with a clause that if amount paid is greater than 20000 then discount of 5% is given else no discount is granted.
 */

#include <iostream>

using namespace std;

class Customer
{
private:
    string name, product;
    int price;

public:
    void readData()
    {
        cout << "Customer Name:\t";
        getline(cin, name);
        cout << "Product:\t";
        getline(cin, product);
        cout << "Price:\t";
        cin >> price;
    }
    void displayData()
    {
        cout << "->->->\tCustomer Bill\t<-<-<-" << endl
             << "Customer Name:\t" << name << endl
             << "Product:\t" << product << endl
             << "Price:\t Rs." << price<<endl;
        if(price>=20000){
            cout<<"Discount:\t5%"<<endl;
            cout<<"Discounted Price:\t Rs."<<0.05*price<<endl;
        }
        int final_amount=(price>=2000)?(price-0.05*price):price;
        cout<<"__________________________________"<<endl;
        cout<<"Total Payable amount:\t Rs."<<final_amount<<endl;
    }
};

int main()
{
    Customer dummy;
    dummy.readData();
    dummy.displayData();
    return 0;
}