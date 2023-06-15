/* 
WAP to add three integer variables using function and illustrating the concept of default arguments.
 */

#include<iostream>
using namespace std;

int addition(int a=0, int b=0, int c=0){
    return a+b+c;
}

int main(){
    cout<<addition()<<endl;
    cout<<addition(1)<<endl;
    cout<<addition(1,2)<<endl;
    cout<<addition(1,2,3)<<endl;
    return 0;
}