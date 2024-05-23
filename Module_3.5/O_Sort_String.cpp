#include <iostream>
using namespace std;

void sortString(string &str)
{
    int n = str.length();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;

    sortString(S);

    cout << S << endl;

    return 0;
}