#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        bool f = false;  // Boolean flag to track if we find an element appearing 3 times
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;

            // Check if this element appears exactly three times
            if (freq[a[i]] == 3) {
                cout << a[i] << endl;
                f = true;  // Mark as found
                break;
            }
        }

        // If no element appears at least 3 times
        if (!f) {
            cout << -1 << endl;
        }
    }
    return 0;
}
