// #include <iostream>
// #include <string>

// bool isLuckyTicket(const std::string& ticket) {
//     int sumFirstThreeDigits = 0;
//     int sumLastThreeDigits = 0;

//     for (int i = 0; i < 3; i++) {
//         sumFirstThreeDigits += ticket[i] - '0';
//         sumLastThreeDigits += ticket[i + 3] - '0';
//     }

//     return sumFirstThreeDigits == sumLastThreeDigits;
// }

// int main() {
//     int t;
//     std::cin >> t;

//     while (t--) {
//         std::string ticket;
//         std::cin >> ticket;

//         if (isLuckyTicket(ticket)) {
//             std::cout << "YES" << std::endl;
//         } else {
//             std::cout << "NO" << std::endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

bool isticket(string s)
{
    int sumFirstThreeDigits = 0;
    int sumLastThreeDigits = 0;

    for (int i = 0; i < 3; i++)
    {
        sumFirstThreeDigits += s[i] - '0';
        sumLastThreeDigits += s[i + 3] - '0';
    }

    return sumFirstThreeDigits == sumLastThreeDigits;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ticket;
        cin >> ticket;
        if (isticket(ticket))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
