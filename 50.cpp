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
    // CB_CD_DB_ vi x la con tro kieu Base nen khi huy thi chi huy base thoi, neu muon huy lop con thi them virtual vao ham huy cua lop cha;
}