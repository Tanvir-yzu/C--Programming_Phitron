<<<<<<< HEAD
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
=======
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
>>>>>>> a7c7a86f7c8cfe1fd8e24f10f5fd98cc0c62cbff
}