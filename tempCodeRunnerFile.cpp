#include <iostream>
using namespace std;
void Func(int i)
{
    try
    {
        if (i > 0)
        {
            throw i;
        }
        else
            throw 'i';
    }

    catch (char i)
    {
        cout << i;
    }

}
int main()
{
    Func(10); 
    Func(0);
}