#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student *student = new Student[n];
    for (int i = 0; i < n; i++)
    {

        cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].id;
    }

    char *reverse = new char[n];
    for (int i = 0; i < n; i++)
    {

        reverse[i] = student[n - i - 1].section;
    }

    for (int i = 0; i < n; i++)
    {

        cout << student[i].name << " " << student[i].cls << " " << reverse[i] << " " << student[i].id << endl;
    }

    delete[] student;
    delete[] reverse;

    return 0;
}