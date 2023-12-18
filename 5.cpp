#include <iostream>
using namespace std;
template <class T = double, int count = 3>
T Func(T var_x)
{
    for (int i = 0; i < count; i++)
    {
        var_x = var_x * var_x;
    }
    return var_x;
}
int main()
{
    double var_x = 2.1;
    cout << var_x << Func<>(var_x);
}