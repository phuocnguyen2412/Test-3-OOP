#include <iostream>
using namespace std;
template <class T, class U = char>
class Exam
{
    T prop_x;
    U prop_y;

public:
    Exam(T a, char b = '$') : prop_x(a), prop_y(b)
    {
    }
    void Func()
    {
        cout << prop_x << prop_y;
    }
};
int main()
{

    Exam<int, int> obj_ii(5, 10);
    Exam<int> obj_i(5);
    Exam<double> obj_d(10.0);
    obj_ii.Func();
    obj_i.Func();
    obj_d.Func();
}