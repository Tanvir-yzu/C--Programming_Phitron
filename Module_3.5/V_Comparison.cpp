#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;

    string result = (S == '<' && A < B) || (S == '>' && A > B) || (S == '=' && A == B) ? "Right" : "Wrong";
    cout << result;
    return 0;
}