#include <iostream>
using namespace std;
class One
{
public:
    double add(double x)
    {
        return x + 0.1;
    }
};
class Two : public One
{
public:
    using One::add; // su dung lai ham double add o lop One
    int add(int x)
    {
        return x + 1;
    }
};
int main()
{
    Two a;
    cout << a.add(10) << a.add(10.5); // 11 10.6
}