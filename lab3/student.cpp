#include <iostream>
using namespace std;

class Student
{
private:
    string name, age, gender;

public:
    void readData(int i)
    {
        cout << "Enter name:" << i;
        getline(cin, name);
        cout << "Enter age:" << i;
        cin >> age;
        cout << "Enter gender:" << i;
        cin >> gender;
        getchar();
    }
    void displayData()
    {
        cout << "==============================" << endl;
        cout << "Name:\t" << name << endl;
        cout << "Age:\t" << age << endl;
        cout << "Gender:\t" << gender << endl;
        cout << "==============================" << endl;
    }
};

int main()
{
    Student student[5];
    for(int i=0;i<3;i++){
        student[i].readData(i);
    }
    for(int i=0;i<3;i++){
        student[i].displayData();
    }
}