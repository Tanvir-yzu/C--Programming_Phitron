#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, T;
    cin >> x >> y >> T;

    bool possible = false;

    for (int a = 0; a <= T / x; ++a)
    {
        for (int b = 0; b <= T / y; ++b)
        {
            if (a * x + b * y == T)
            {
                possible = true;
                break;
            }
        }
        if (possible)
        {
            break;
        }
    }

    if (possible)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}