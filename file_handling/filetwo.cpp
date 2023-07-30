#include<iostream>
#include<fstream>
using namespace std;

int main(){

string str1,str3,str2 ;

ifstream infile("text_files/love.txt");

getline(infile,str1);
getline(infile,str2);
getline(infile,str3);

cout<<str1<<str2<<str3<<endl;

// cout<< "Written in file"<<endl;

return 0;

}
