#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        char a[8][8];  // Change int to char
        vector<char> s;

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> a[i][j];
                if (a[i][j] != '.') {  // Collect letters only
                    s.push_back(a[i][j]);
                }
            }
        }

        // Print the collected letters as a word
        for (int i = 0; i < s.size(); i++) {
            cout << s[i];
        }
        cout << endl;  // Print each word on a new line
    }
    return 0;
}
