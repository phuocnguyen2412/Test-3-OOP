#include <iostream>
using namespace std;
class Base
{
    int prop;

public:
    Base() : prop(0) {}
    void Func()
    {
        this->prop++;
        cout << this->prop;
    }
};
class Derived : private Base
{
public:
    void Func()
    {
        this->Func(); // RE
    }
};
int main()
{
    Derived obj;
    obj.Func();
}