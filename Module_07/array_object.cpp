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
    // cin.ignore();
    // Student s[n];
    Student *s = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].mark;
        // cin.ignore();
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].mark << endl;
    }
    delete[] s;

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
    // cin.ignore();
    // Student s[n];
    Student *s = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].mark;
        // cin.ignore();
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].roll << " " << s[i].mark << endl;
    }
    delete[] s;

    return 0;
>>>>>>> 6692023a2ed0968a391fdfbecc2e32f510169a97
}