<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int oddString(string s, int l, int r)
{
    int cha[26] = {0};
    int oddCount = 0;

    for (int i = l; i <= r; ++i)
    {
        cha[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (cha[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    return oddCount;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        for (int i = 0; i < q; ++i)
        {
            int l, r;
            cin >> l >> r;
            cout << oddString(s, l - 1, r - 1) << endl;
        }
    }

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int oddString(string s, int l, int r)
{
    int cha[26] = {0};
    int oddCount = 0;

    for (int i = l; i <= r; ++i)
    {
        cha[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; ++i)
    {
        if (cha[i] % 2 != 0)
        {
            oddCount++;
        }
    }

    return oddCount;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        for (int i = 0; i < q; ++i)
        {
            int l, r;
            cin >> l >> r;
            cout << oddString(s, l - 1, r - 1) << endl;
        }
    }

    return 0;
>>>>>>> a7c7a86f7c8cfe1fd8e24f10f5fd98cc0c62cbff
}