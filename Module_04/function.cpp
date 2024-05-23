#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int clss;
    double gpa;
    Student(int roll, int clss, double gpa)
    {
        this->roll = roll;
        this->clss = clss;
        this->gpa = gpa;
    }
};

Student* fun()
{
    // Student tanvir(124, 12, 3.5);
    Student* tanvir = new Student(124, 12, 4.6);
    return tanvir;
}

int main()
{
    Student* ans = fun();
    cout << ans->roll << endl;
    cout << ans->clss << endl;
    cout << ans->gpa << endl;
    delete ans;
    return 0;
}