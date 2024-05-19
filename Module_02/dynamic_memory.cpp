#include <bits/stdc++.h>
using namespace std;

int * fun(){
int *a = new int;
    *a = 10;
    return a;
}
int main()
{
int *p= fun();
cout << *p << endl;
    // auto x = 10;
    // int *a = new int;
    // *a = 10;
    // cout << *a << endl;
    // float *b = new float;
    // *b = 10.5;
    // cout << *b << endl;

    return 0;
}