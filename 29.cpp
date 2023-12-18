#include <iostream>
using namespace std;
class P
{
public:
    virtual void show() = 0;
};
class Q : public P
{
    int x;


};
int main()
{
    Q q; // loi do chua ghi de ham show 

}