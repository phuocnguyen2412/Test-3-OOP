#include <iostream>
#include <string>
using namespace std;
class Base{
    public:
        virtual string print() const{
            return "B";
        }
        
};
class Derrived : public Base{
    public:
        virtual string print() const{
            return "D";
        }
};
void describe(Base p){
    cout << p.print();
}
int main(){
    Base b;
    Derrived d;
    describe(b); // B
    describe(d); // B
}