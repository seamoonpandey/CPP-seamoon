#include<iostream>
#include<fstream>
using namespace std;

int main(){

string str1 = "I love Me.";
string str2 = "I can die for me.";
string str3 = "I am seamoon.";

ofstream outfile("text_files/love.txt");

outfile<<str1<<endl<<str2<<endl<<str3<<endl;

cout<< "Written in file"<<endl;

return 0;

}
