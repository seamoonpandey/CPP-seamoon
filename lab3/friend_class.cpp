/* WAP to illustrate the use of a friend class */

#include <iostream>
using namespace std;

class FriendClass;

class ClassOne
{
private:
    int numA;
     friend class FriendClass;

public:
    ClassOne(int x)
    {
        numA = x;
    }
   
};
class FriendClass
{
public:
    void display(ClassOne obj1)
    {
        cout << obj1.numA << endl;
    };
};

int main(){
    ClassOne objone(8);
    FriendClass objfriend;

    objfriend.display(objone);
    return 0;
}

