#include <iostream>
using namespace std;
template <class T>
class Exam{
    public:
        Exam(){
            cout << "C";
        }
        ~Exam(){
            cout << "D";
        }
};
int main(){
    Exam<int> a; // C
    Exam<char> b; // C
    Exam<double> c; // C
    // D D D
}