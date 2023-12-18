#include <iostream>
using namespace std;
template <class T>
class Exam
{
public:
    Exam(){

    };
    ~Exam(){

    };
    T Func1(T var_x)
    {
        return var_x;
    }
    T Func2(T var_x)
    {
        return var_x;
    }
};
int main()
{
    Exam<int> obj_i;
    Exam<double> obj_d;
    cout << obj_i.Func1(200) << obj_d.Func2(3.123);
}