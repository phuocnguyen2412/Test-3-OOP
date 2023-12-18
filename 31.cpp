#include <iostream>
#include <exception>
using namespace std;
class Base
{
    virtual void Func() {}
};
class Derived : public Base
{
    int prop;
};
int main()
{
    try
    {
        Base *ptr_x = new Derived;
        Base *ptr_y = new Base;
        Derived* ptr_d;
        ptr_d = dynamic_cast<Derived *>(ptr_x);
        if (ptr_d == 0)
        {
            cout << "NULL 1";
        }
        ptr_d = dynamic_cast<Derived *>(ptr_y);
        if (ptr_d == 0)
        {
            cout << "NULL 2"; // NULL 2 boi vi khong the chuyen doi tu con tro co so thanh con tro dan xuat
        }
    }
    catch (const std::exception &e)
    {
        cout << "Exception!";
    }
}