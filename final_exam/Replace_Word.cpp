#include <bits/stdc++.h>
using namespace std;

void replaceSubstring(string &a, string &b) {
    int pos = 0;
    int len_a = a.length();
    int len_b = b.length();

    while (pos <= len_a - len_b) {
        bool match = true;
        for (int i = 0; i < len_b; ++i) {
            if (a[pos + i] != b[i]) {
                match = false;
                break;
            }
        }

        if (match) {
            a.replace(pos, len_b, "#");
            pos += 1;
            len_a = a.length(); 
        } else {
            pos += 1;
        }
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        replaceSubstring(a, b);
        cout << a << endl;
    }
    return 0;
}
