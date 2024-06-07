#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;

    int he[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> he[i];
    }

    sort(he, he + n);

    for (int i = 0; i < n - 1; ++i)
    {
        int d = he[i + 1] - he[i];
        int cost = d * (i + 1);

        if (cost <= k)
        {
            k -= cost;
            for (int j = 0; j <= i; ++j)
            {
                he[j] = he[i + 1];
            }
        }
        else
        {
            int in = k / (i + 1);
            for (int j = 0; j <= i; ++j)
            {
                he[j] += in;
            }
            k = 0;
            break;
        }
    }

    if (k > 0)
    {
        int in = k / n;
        for (int i = 0; i < n; ++i)
        {
            he[i] += in;
        }
    }

    cout << he[0] << endl;

    return 0;
}