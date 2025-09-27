#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int c = 0, d = 0, f = 0;
        for (int i = 0; i < n; i++) {
            int candy;
            cin >> candy;
            f += candy;
            if (candy == 1) c++;
            else d++;
        }

        if (f % 2 != 0) {
            cout << "NO" << endl;
        } else {
            int half = f / 2;
            if (half % 2 == 0 || (half % 2 == 1 && c > 0)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
