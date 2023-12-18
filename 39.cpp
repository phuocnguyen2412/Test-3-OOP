#include <iostream>
using namespace std;
class Base{
    int x,y;
    double d;
    public:
        void SetPropX(int m){
            x = m;
        }
        void PrintPropX(){
            cout << x;
        }
};
class Derived : private Base{

};
int main(){
    Derived a;
    cout << sizeof(Derived); // 16;
}