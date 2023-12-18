#include <iostream>
using namespace std;
int main()
{
    char *ptr;
    try
    {
        ptr = new char[1024];
        if (ptr == 0)
            throw "Error!";
        else
            cout << sizeof(ptr); // 8
    }
    catch (char &e)
    {
        cout << e;
    }
}