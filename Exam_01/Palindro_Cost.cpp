<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {
        string s;
        int K;
        cin >> s >> K;

        int cost = 0;
        int left = 0, right = s.length() - 1;

        while (left < right)
        {

            cost += abs(s[left] - s[right]);

            left++;
            right--;
        }

        if (cost <= K)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {
        string s;
        int K;
        cin >> s >> K;

        int cost = 0;
        int left = 0, right = s.length() - 1;

        while (left < right)
        {

            cost += abs(s[left] - s[right]);

            left++;
            right--;
        }

        if (cost <= K)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
>>>>>>> a7c7a86f7c8cfe1fd8e24f10f5fd98cc0c62cbff
}