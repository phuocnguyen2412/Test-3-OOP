#include <iostream>
using namespace std;
class Base
{
public:
    virtual void Func() = 0;// CE 

};
class DerivedA : public Base
{
public:
     void Func()
    {
        cout << "ITF";
    }
};
class DerivedB : public Base
{
public:
     void Func()
    {
        cout << "DUT";
    }
};
int main()
{
    Base* arr[2];
    DerivedA obj_a;
    DerivedB obj_b;
    arr[0] = &obj_a;
    arr[1] = &obj_b;
    arr[0] -> Func(); // ITF
    arr[1] -> Func(); // DUT
}