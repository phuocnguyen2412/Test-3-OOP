#include <iostream>
using namespace std;

class ClassA
{
protected:
    int x;

public:
    ClassA()
    {
        x = 0;
    }
    friend void Show();
};
class ClassB : public ClassA
{
public:
    ClassB()
    {
        y = 0;
    }

private:
    int y;
};
void Show()
{
    ClassA a;
    ClassB b;
    cout << a.x << b.y; // CE vi ko the truy cap vao b.y;
};
int main()
{
    Show();
}