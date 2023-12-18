#include <iostream>
using namespace std;
template <class T>
class Base
{
protected:
    int prop;

public:
    Base(int);
};
template <class T>
Base<T>::Base(int prop) : prop(prop) {}
template <class T>
class Derived : private Base<char>
{
public:
    Derived();
};
template <class T>
Derived<T>::Derived() : Base<char>::Base(100)
{
    cout << prop * 2; // 200
}
int main()
{
    Derived<char> obj;
}