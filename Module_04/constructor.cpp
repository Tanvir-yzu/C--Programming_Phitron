#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int clss;
    double gpa;
    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     clss = c;
    //     gpa = g;
    // }
    Student(int roll, int clss, double gpa)
    {
        // (*this).roll = roll;
        // (*this).clss = clss;
        // (*this).gpa = gpa;
        this->roll = roll;
        this->clss = clss;
        this->gpa = gpa;
    }
};
int main()
{
    Student tanvir(123, 10, 3.5);
    cout << tanvir.roll << endl;
    cout << tanvir.clss << endl;
    cout << tanvir.gpa << endl;

    return 0;
}