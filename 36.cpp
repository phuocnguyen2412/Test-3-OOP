#include <iostream>
using namespace std;
class BaseA
{
protected:
    int prop_x, prop_y;

public:
    void SetProps(int x, int y)
    {
        prop_x = x;
        prop_y = y;
    }
};
class BaseB
{
public:
    void print(int x)
    {
        cout << x;
    }
};
class DerivedA : public BaseA, public BaseB
{
public:
    int Func()
    {
        return prop_x * prop_y;
    }
};
class DerivedB : public BaseA, public BaseB
{
public:
    int Func()
    {
        return prop_x * prop_y /2 ;
    }
};
int main()
{
    DerivedA a;
    DerivedB b;
    a.SetProps(4, 5);
    b.SetProps(4, 5);
    a.print(a.Func()); // 20 
    b.print(b.Func()); // 10
}