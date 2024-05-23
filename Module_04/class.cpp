#include <bits/stdc++.h>
using namespace std;

class student {
public:
    char name[100];
    int roll;
    double marks;
};

int main() {
    student a, b;

    // Reading first student's data
    cin.getline(a.name, 100);
    cin >> a.roll >> a.marks;
    cin.ignore(); // Ignore the newline character after marks input

    // Reading second student's data
    cin.getline(b.name, 100);
    cin >> b.roll >> b.marks;
    cin.ignore(); // Ignore the newline character after marks input

    // Outputting student a's data
    cout << a.name << " " << a.roll << " " << a.marks << endl;

    // Outputting student b's data
    cout << b.name << " " << b.roll << " " << b.marks << endl;

    return 0;
}
