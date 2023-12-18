#include <iostream>
using namespace std;
class Base
{

public:
    Base()
    {
    }
    ~Base()
    {
    }

private:
protected:
};
class Derived : public Base
{

public:
    Derived();

    Derived()
    {
    } // Runtime ERROR

private:
protected:
};
int main()
{
    cout << "RUN";
}