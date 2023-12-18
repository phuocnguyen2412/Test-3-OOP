#include <iostream>
using namespace std;
class Base
{
public:
    virtual void Func() = 0;
};
class DerivedA: public Base{
    public:
        void Func (){
            int var_x = 5;
            cout << var_x;
        }
};
class DerivedB: public Base{
    public:
        void Func (){
       
            cout << "5";
        }
};
int main()
{
    DerivedA a;
    a.Func();
    DerivedB b;
    b.Func();
}