#include <iostream>
#include <exception>
using namespace std;
void terminator()
{
    cout << "Terminate" << endl;
}
void (*old_terminate)() = set_terminate(terminator);
class Botch
{
public:
    class Fruit
    {
    };
    void f()
    {
        cout << "One";
        throw Fruit();
    }
    ~Botch()
    {
        throw 'c';
    }
};
int main()
{
    try
    {
        Botch b;
        b.f(); // OneTerminate
    }

    catch (...)
    {
        cout << "Inside_catch";
    }
}