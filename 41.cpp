#include <iostream>
using namespace std;
class Base
{
protected:
    int prop;

public:
    Base()
    {
        prop = 10;
    }
    Base(int x)
    {
        prop = x;
    }
    ~Base()
    {
    }
    int getProp()
    {
        return this->prop;
    }
};
class Derived : public Base
{
    int prop;

public:
    Derived(int x) : prop(x) {}

    ~Derived()
    {
    }
};
int main()
{
    Derived a(100);
    cout << a.getProp() << a.getProp(); // 10 10 vi getProp o lop cha thi lay prop cua lop cha 
}