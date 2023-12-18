#include <iostream>
using namespace std;
void Func(int c)
{
    if (c < numeric_limits<char>::max()) // 127
        throw invalid_argument("Error!");
    else
        cout << "Executed!";
}
int main()
{
    try
    {
        Func(256); // Executed!
    }
    catch (invalid_argument &e)
    {
        cerr << e.what();
        return -1;
    }
}