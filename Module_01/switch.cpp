#include <iostream>
using namespace std;

int main()
{
    int a;

    cin >> a;
    switch (a)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;

    default:
    cout << "kisu nai" << endl;
        break;
    }

    return 0;
}