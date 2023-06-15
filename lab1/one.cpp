#include <iostream>
#include <cmath>
using namespace std;

class Question1 {
 public:
 int number;

 public:
 bool isPrime(int n){
 for(int i = 2; i <=sqrt(n); i++){
 if(n%i==0) return false;
 }
 return true;
 }
};

int main(){
 Question1 question;
 cin >> question.number;
 string result=question.isPrime(question.number)?"true":"false";
 cout<<result<<endl;
 return 0;
}
