#include <iostream>
using namespace std;
template <class T>
T Func(const T x, const T y)
{
    cout << "no specialization";
    return x < y ? y : x;
}
template <>
const char *Func(const char *x, const char *y)
{
    return (strcmp(x, y) < 0) ? y : x;
}
int main()
{
    const char *x = "class";
    const char *y = "template";
    const char *z = Func(x, y);
    // cout << strcmp(x, y) = - 17;
    cout << z; // template;
}