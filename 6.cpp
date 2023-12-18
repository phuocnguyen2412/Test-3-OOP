#include <iostream>
#include <new>
using namespace std;
int main(){
    int i, n;
    int* p;
    i = 2 ;
    p = new (nothrow ) int [i];
    
    if (p == 0){
        cout <<"Error: memory cout not be allocated";

    }
    else {
        for (n = 0; n < i; n++){
            p[n] = 5;
        }
        for (n = 0; n < i ; n++){
            cout << p[n];
        }
        delete[] p;
    }
}