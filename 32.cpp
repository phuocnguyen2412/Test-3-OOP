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
    Exam<int> a; // CD
}