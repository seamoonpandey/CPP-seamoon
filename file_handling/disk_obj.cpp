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
		getline(cin,name);
		cout<<"Enter your age:\t";
		cin>>age;
		getchar();
	}
};

int main(){
	Person person;
	person.getData();

	ofstream outfile("text_files/Person.txt",ios::binary);
	outfile.write(reinterpret_cast<char*>(&person), sizeof(person));
	return 0;
}