#include <iostream>
using namespace std;
class Base1
{
protected:
    int x;

public:
    Base1()
    {
        x = 100;
    }
    ~Base1() {}
    int Sample()
    {
        return x;
    }
};
class Base2
{
protected:
    int y;

public:
    Base2()
    {
        y = 200;
    }
    int Sample2()
    {
        return y;
    }
};
class Dirived1 : public Base1, public Base2
{
    int z;

public:
    Dirived1()
    {
        z = 300;
    }
    int Func()
    {
        return z + x + y;
    }
};
int main()
{
    Base1 a;
    Base2 b;
    Dirived1 c;
    cout << c.Base1::Sample() << c.Base2::Sample2(); // 100200
}