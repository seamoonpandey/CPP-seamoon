/*
 WAP to define enumerator with your choice.
Instead of default value, assign your own integer value to enumerator.
(output samples)
*/

#include <iostream>
using namespace std;
enum season
{
    spring,
    summer=42,
    autumn,
    winter
};
int main()
{
    season mausam;
    mausam=autumn;
    cout<<mausam<<mausam;
}