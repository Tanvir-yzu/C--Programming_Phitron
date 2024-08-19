<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        
        sort(arr, arr + N);

      
        cout << arr[0] << " ";

       
        for (int i = 1; i < N; ++i) {
            if (arr[i] != arr[i - 1]) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        
        sort(arr, arr + N);

      
        cout << arr[0] << " ";

       
        for (int i = 1; i < N; ++i) {
            if (arr[i] != arr[i - 1]) {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
>>>>>>> a7c7a86f7c8cfe1fd8e24f10f5fd98cc0c62cbff
}