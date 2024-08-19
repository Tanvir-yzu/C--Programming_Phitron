#include <bits/stdc++.h>
using namespace std;

int isToCentury(int runs[], int n) {
    int closest = 0;
    int minDiff = 100; 

    for (int i = 0; i < n; i++) {
        int difference = runs[i] - 100;
        if (difference < 0) {
            difference = -difference; 
        }
        if (difference < minDiff) {
            minDiff = difference;
            closest = runs[i];
        }
    }
    return closest;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int runs[11];
        for (int i = 0; i < n; i++) {
            cin >> runs[i];
        }
        cout << isToCentury(runs, n) << endl;
    }

    return 0;
}
