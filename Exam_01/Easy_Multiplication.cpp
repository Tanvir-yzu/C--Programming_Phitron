#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

   
    int* arr = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int Q;
    cin >> Q;

    
    int* prefix = new int[N + 1];
    prefix[0] = 0;

  
    for (int i = 1; i <= N; ++i) {
        prefix[i] = prefix[i - 1] + (arr[i - 1] == 0 ? 1 : 0);
    }

   
    while (Q--) {
        int L, R;
        cin >> L >> R;
        if (prefix[R] > prefix[L - 1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

   
    delete[] arr;
    delete[] prefix;

    return 0;
}
