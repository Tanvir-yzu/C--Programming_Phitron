#include <bits/stdc++.h>
using namespace std;
namespace rakib
{
    int a = 10;
    void hello()
    {
        cout << "hello rakib" << endl;
    }

}
namespace sakib
{
    int b = 20;
    void hello()
    {
        cout << "hello sakib" << endl;
    }

}

using namespace rakib;
// using namespace sakib;

int main()
{
    cout << a << endl;
    // cout << b << endl;
    hello();
    sakib::hello();
    return 0;
}