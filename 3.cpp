#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show() = 0;
};
int main()
{
    Base b; // CE 
    Base *bp; // Dung
}