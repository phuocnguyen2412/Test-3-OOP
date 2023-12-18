#include <iostream>
#include <exception>
using namespace std;
void Func()
{
    cerr << "terminate handler called!" << endl;
    abort();
}
int main()
{
    set_terminate(Func);
    throw 0;
}