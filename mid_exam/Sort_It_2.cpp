#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n) {
    int* a = new int[n]; // Dynamically allocate memory for the array
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>()); // Sort the array in descending order
    return a; // Return the pointer to the sorted array
}

int main() {
    int n;
    cin >> n;
    int* sorted_array = sort_it(n);
    for (int i = 0; i < n; i++) {
        cout << sorted_array[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;
    delete[] sorted_array; // Free the dynamically allocated memory
    return 0;
}
