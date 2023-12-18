#include <iostream>
static int Result;
using namespace std;
class India{
    public:
    void Change(int x = 10, int y = 20, int z = 30){
        cout << x + y + z;
    }
    void Display(int x = 40, float y = 50.0){
        Result = x % x; cout << Result;
    }
};
class Bix{
    int x, y;
    public:
        void Change (int x , int y = 50){
            cout << x + y;
        }
};
class IndiaBix : public India, public Bix{
    public:
    void Display(int x = 10, int xx = 100, int xxx = 1000){
        Result = x + xx % x * x; cout << Result;
    }

};
int main(){
    IndiaBix objBix;
    objBix.India::Display(10,20.00);
}