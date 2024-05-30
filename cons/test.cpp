// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;

//     getline(cin, s);
//     stringstream ss(s);
//     string word;
//     int count = 0;

//     // while (ss >> word)
//     // {
//     //     cout << word << endl;
//     //     count++;
//     // }
//     for (; ss >> word; count++)
//     {
//         for (char c : word)
//         {
//             cout << c << " ";
//         }

//         cout << word << endl;
//     }

//     cout << count << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     stringstream ss(s);

//     string word;
//      reverse(word.begin(), word.end());
//      cout<< word << endl;
//     while (ss >> word)
//     {
//         reverse(word.begin(), word.end());
//         cout<< " " << word ;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     int index = s.find("Phitron");
//     // cout << index << endl;
//     int count = 0;
//     while (s.find("Phitron") != -1)
//     {
//         count++;
//         cout << "world"<< endl;
//     }
//     cout << count << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    getline(cin, s);
    s.replace(s.find("Phitron"), 7, " ");
    cout<<s<<endl;
    return 0;
}