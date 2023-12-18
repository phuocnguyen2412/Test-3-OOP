#include <iostream>
using namespace std;
template <typename T, int count>
void Func(T var_x)
{
    T arr[count];
    for (int i = 0; i < count; ++i)
    {
        arr[i] = var_x++;
        cout << arr[i];
    }
    //2.13.14.1
}
int main()
{
    double var_x = 2.1;
    Func<double, 3>(var_x);
}