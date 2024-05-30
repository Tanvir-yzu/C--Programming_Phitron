<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for (char c : s)
    {
        frq[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for (char c : s)
    {
        frq[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
    }
    return 0;
>>>>>>> 6692023a2ed0968a391fdfbecc2e32f510169a97
}