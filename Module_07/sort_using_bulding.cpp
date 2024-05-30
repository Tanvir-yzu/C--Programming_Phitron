#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int mark;
};

bool cmp(Student a, Student b) {
    if (a.mark == b.mark)
        return a.roll < b.roll;
    else
        return a.mark > b.mark;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading n

    Student s[n];

    for (int i = 0; i < n; i++) {
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].mark;
        cin.ignore(); // Ignore the newline character after reading roll and mark
    }

    sort(s, s + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << s[i].name << " " << s[i].roll << " " << s[i].mark << endl;
    }

    return 0;
}
