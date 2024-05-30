#include <bits/stdc++.h>
using namespace std;

int main()
{
    int MAX_SIZE = 100000 + 5;
    char a[MAX_SIZE];

    while (cin.getline(a, MAX_SIZE))
    {
        int len = strlen(a);

        sort(a, a + len);

        for (int i = 0; i < len; ++i)
        {
            if (a[i] != ' ')
            {
                cout << a[i];
            }
        }
        cout << endl;
    }

    return 0;
}
