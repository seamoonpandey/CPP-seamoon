#include<iostream>
using namespace std;

class Counter{
    private:
    static int count;
    public:
    void display(){
        cout<<count<<endl;
    }
    void increment(){
        count++;
    }
    void decrement(){
        count--;
    }
};

int Counter:: count=0;

int main(){
    Counter counter;
    counter.display();
    counter.increment();
    counter.display();
    counter.decrement();
    counter.display();
}