#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    a.assign(3, 4);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    } /// 444
}