#include <iostream>
using namespace std;
template <class T>
T Func(T var_x)
{
    cout << var_x;
    return var_x;
}
int Func(int var_x)
{
    cout << var_x;
    return var_x;
}
int main()
{
    int var_x = 5;
    int var_y = Func(var_x); //  Func dong 9
    double var_z = Func(5.5); // func dong 4
}