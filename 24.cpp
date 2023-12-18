#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    Base();
    // {
    //     a = 0;
    // }
};
Base::Base()
{
    this->a = 0;
}
class Derived1 : virtual public Base
{
public:
    int c;
};
class Derived2 : virtual public Base
{
public:
    int c;
};
class DerivedDerived :  public Derived1,  public Derived2
{
public:
    void Show()
    {
        cout << a;
        
    }
};
int main()
{
    DerivedDerived d;
    d.Show();
}