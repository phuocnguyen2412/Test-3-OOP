#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "CB_";
    }
    ~Base()
    {
        cout << "DB_";
    }
};

class Dirived : public Base
{

public:
    Dirived()
    {
        cout << "CD_";
    }
    ~Dirived()
    {
        cout << "DD_";
    }
};
int main()
{
    Base *x = new Dirived();
    delete x;
    // CB_CD_DB_
}