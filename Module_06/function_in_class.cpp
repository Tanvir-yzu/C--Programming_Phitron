#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    int marks1;
    int marks2;
    Person(string nm, int ag, int m1, int m2)
    {
        this->name = nm;
        this->age = ag;
        this->marks1 = m1;
        this->marks2 = m2;
    }
    void hello()
    {

        cout << this->name << " " << this->age << endl;
    }
    int totalMarks()
    {
        return this->marks1 + this->marks2;
    }
};

int main()
{
    Person rakib("Rakib islam", 10, 95, 98);
    rakib.hello();
    // cout << rakib.name << " " << rakib.age << endl;
    cout << rakib.totalMarks() << endl;

    Person sakib("Sakib islam", 11, 95, 98);
    sakib.hello();
    cout << sakib.totalMarks() << endl;

    return 0;
}