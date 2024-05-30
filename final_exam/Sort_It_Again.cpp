#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp( Student& s1,  Student& s2) {
    if (s1.eng_marks != s2.eng_marks) {
        return s1.eng_marks > s2.eng_marks;
    } else if (s1.math_marks != s2.math_marks) {
        return s1.math_marks > s2.math_marks;
    } else {
        return s1.id < s2.id; 
    }
}

int main() {
    int n;
    cin >> n;
    Student* s = new Student[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s, s + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    delete[] s;

    return 0;
}
