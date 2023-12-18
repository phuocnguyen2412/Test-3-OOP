#include <iostream>
using namespace std;
class Base
{
protected:
    int prop;

public:
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
    Derived(int x, int y) : Base(y), prop(x) {}

    ~Derived()
    {
    }
    void Func()
    {
        cout << this->prop;
    }
};
int main()
{
    Derived a(3, 4);
    a.Func(); // 3
}