#include <iostream>
#include <string>
using namespace std;
template <class T>
inline T Func(T var_x)
{
    T result = var_x * var_x;
    return result;
}
template <>
string Func<string>(string str)
{
    return (str + str);
}
int main()
{
    int var_x = 2, var_y;
    string str("ITF");
    var_y = Func<int>(var_x);// 4
    cout << var_x << var_y << Func(str); // ITFITF
}