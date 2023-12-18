#include <iostream>
#include <string>
using namespace std;
template <class T>
void Func(T x)
{
    cout << x;
}
int main()
{
    double x = 5.5;
    string str("IT");
    Func(x);
    Func(str);
}