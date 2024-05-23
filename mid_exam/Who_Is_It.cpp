#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id;
    string name;
    char section;
    int totalMarks;
};

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        Student students[3];
        for (int i = 0; i < 3; ++i)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }

        int maxMarks = -1, maxIndex = -1;
        for (int i = 0; i < 3; ++i)
        {
            if (students[i].totalMarks > maxMarks || (students[i].totalMarks == maxMarks && students[i].id < students[maxIndex].id))
            {
                maxMarks = students[i].totalMarks;
                maxIndex = i;
            }
        }

        cout << students[maxIndex].id << " " << students[maxIndex].name << " " << students[maxIndex].section << " " << students[maxIndex].totalMarks << endl;
    }

    return 0;
}