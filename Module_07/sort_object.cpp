#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int mark;
};

int main() {
    int n;
    cin >> n;

    Student s[n];
    cin.ignore(); // Ignore the newline character after reading n

    for (int i = 0; i < n; i++) {
        getline(cin, s[i].name);
        cin >> s[i].roll >> s[i].mark;
        cin.ignore(); // Ignore the newline character after reading roll and mark
    }

    // Sort the students based on marks in descending order and roll number in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].mark < s[j].mark) {
                swap(s[i], s[j]);
            } else if (s[i].mark == s[j].mark && s[i].roll > s[j].roll) {
                swap(s[i], s[j]);
            }
        }
    }

    // Print the sorted students
    for (int i = 0; i < n; i++) {
        cout << s[i].name << " " << s[i].roll << " " << s[i].mark << endl;
    }

    return 0;
}
