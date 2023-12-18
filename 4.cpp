#include <iostream>
using namespace std;
class Base
{
public:
    virtual static void Func() // CE 
    {
        cout << "Base";
    }
};
class Derived : public Base
{
public:
    static void Func()
    {
        cout << "Deriverd";
    }
};
int main()
{
    Base *ptr = new Base();
    Derived obj_b;
    ptr = &obj_b;
    ptr->Func();
}