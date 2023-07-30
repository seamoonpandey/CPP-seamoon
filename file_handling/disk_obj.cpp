#include<iostream>
#include<fstream>
using namespace std;

class Person{

protected:
	string name;
	short age;
public:
	void getData(){
		cout<<"Enter name:\t";
		cin>>name;
		cout<<"Enter your age:\t";
		cin>>age;
		getchar();
	}
};

int main(){

}