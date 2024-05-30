// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     s.replace(s.find("EGYPT"), 5, " ");
//     cout << s << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
    
//     string target = "EGYPT";
//     string replacement = " ";
//     size_t pos = 0;

//     while ((pos = s.find(target, pos)) != string::npos)
//     {
//         s.replace(pos, target.length(), replacement);
//         pos += replacement.length(); 
//     }

//     cout << s << endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    // Find and replace all occurrences of "EGYPT"
    int pos = s.find("EGYPT");
    while (pos != "EGYPT")
    {
        s.replace(pos, 5, " ");
        pos = s.find("EGYPT", pos + 1); // Continue searching from the next character
    }

    cout << s << endl;

    return 0;
}
