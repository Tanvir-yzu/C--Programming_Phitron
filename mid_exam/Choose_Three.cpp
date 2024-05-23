#include<bits/stdc++.h>
using namespace std;

string isThreeValue(int A[], int N, int S) {
    sort(A, A + N);
    for (int i = 0; i < N - 2; ++i) {
        int left = i + 1;
        int right = N - 1;
        while (left < right) {
            int current_sum = A[i] + A[left] + A[right];
            if (current_sum == S) {
                return "YES";
            } else if (current_sum < S) {
                ++left;
            } else {
                --right;
            }
        }
    }
    return "NO";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;
        int A[N];
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        cout << isThreeValue(A, N, S) << endl;
    }

    return 0;
}









