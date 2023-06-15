#include <iostream>
#include <cmath>
#include <cassert>
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

void testIsPrime() {
 Question1 question;
 assert(question.isPrime(2) == true);
 assert(question.isPrime(3) == true);
 assert(question.isPrime(4) == false);
 assert(question.isPrime(5) == true);
 assert(question.isPrime(6) == false);
 assert(question.isPrime(7) == true);
 assert(question.isPrime(8) == false);
 assert(question.isPrime(9) == false);
 assert(question.isPrime(10) == false);
 assert(question.isPrime(11) == true);
 cout << "All tests passed." << endl;
}

int main(){
 testIsPrime();
 return 0;
}
