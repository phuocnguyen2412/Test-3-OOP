#include <iostream>
using namespace std;
class Base
{
public:
    virtual void Func()
    {
        cout << "Base";
    };
};
class Derived : public Base
{
public:
    void Func()
    {
        cout << "Derived";
    }
};
class DerivedA : public Derived
{
public:
    void Func()
    {

        cout << "DerivedA";
    }
};
class DerivedB : public Derived
{
public:
    void Func()
    {

        cout << "DerivedB";
    }
};
int main()
{
    Base *ptr;
    DerivedA a;
    *ptr = a;  CE
    ptr->Func();
}