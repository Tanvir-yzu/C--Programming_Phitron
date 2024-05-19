#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
    int a, b, f;

    cin >> a >> b >> f;
    // int c = min({a, b, f});
    // int d = max({a, b, f});
    // cout << "min" << " " << c << " \n"
    //      << "max" << " " << d << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}