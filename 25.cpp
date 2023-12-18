#include <iostream>
using namespace std;
class Base
{
    int prop;

public:
    virtual void Func() = 0;
};
class Derived : public Base
{
public:
    void Func()
    {
        cout << "ITF";
    }
};
int main()
{
    Base *ptr;
    ptr->Func(); // segmentation fault 
}