#include <iostream>
using namespace std;
class Student{
    public:
        int rno, m1,m2;
        void get(){
            rno = 15;
            m1 = 10;
            m2 = 10;
        }
};
class Sport{
    public:
        int sm;
        void getsm(){
            sm = 10;
        }
};
class statement : public Student , public   Sport{
    int tot, avg;
    public:     
        void display(){
            this->tot = m1 + m2 + sm;
            this ->avg = tot / 3;
            cout << tot << avg;
        }
};
int main(){
    statement a;
    a.get();
    a.getsm();
    a.display();
}