#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("Rakib", 20);
    Person *sakib = new Person("Sakib", 21);
    // rakib = sakib;
    // rakib->name = sakib->name;
    // rakib->age = sakib->age;
    *rakib = *sakib;
    delete sakib;
    cout<<rakib->name << endl;
    cout<<rakib->age << endl;
    
    return 0;
}