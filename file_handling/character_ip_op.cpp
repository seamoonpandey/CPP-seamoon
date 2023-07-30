#include <iostream>
#include <fstream>

using namespace std;

int main(){
	string str = "Time is a great teacher, but unfortunately " "it kills all its pupils. Berlioz";
	ofstream outfile("teach.txt");
	for(char ch:str){
		outfile.put(ch);
	}
	cout<<"Done"<<endl;

	

	return 0;
}