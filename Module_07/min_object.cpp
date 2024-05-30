<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].mark;
    }
    // int mn = INT_MAX;
    Student mn;
    mn.mark = INT_MAX;
    Student mx;
    mx.mark = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if (s[i].mark < mn.mark)
        // {
        //     mn = s[i];
        // }
        if (s[i].mark > mx.mark)
        {
            mx = s[i];
        }
    }

    // cout << mn.name << " " << mn.roll << " " << mn.mark << endl;
    cout << mx.name << " " << mx.roll << " " << mx.mark << endl;

    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].mark;
    }
    // int mn = INT_MAX;
    Student mn;
    mn.mark = INT_MAX;
    Student mx;
    mx.mark = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        // if (s[i].mark < mn.mark)
        // {
        //     mn = s[i];
        // }
        if (s[i].mark > mx.mark)
        {
            mx = s[i];
        }
    }

    // cout << mn.name << " " << mn.roll << " " << mn.mark << endl;
    cout << mx.name << " " << mx.roll << " " << mx.mark << endl;

    return 0;
>>>>>>> 6692023a2ed0968a391fdfbecc2e32f510169a97
}