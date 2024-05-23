#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    int result = (s == '+') ? (a + b) : (s == '-') ? (a - b)
                                                   : (a * b);

    if (result == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}