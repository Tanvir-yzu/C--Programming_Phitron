#include <iostream>
#include <string>
using namespace std;

int calculateBalloons(string s) {
    int balloons = 0;
    int solved[26] = {0};

    for (char c : s) {
        int idx = c - 'A';
        if (solved[idx] == 0) {
            solved[idx] = 1;
            balloons++;
        }
        balloons += (solved[idx] == 1) ? 1 : 0;
    }

    return balloons;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << calculateBalloons(s) << endl;
    }

    return 0;
}
