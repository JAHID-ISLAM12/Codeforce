#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        set<char> unique_chars(s.begin(), s.end());

        if (unique_chars.size() == 1) {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());


        if (s == string(s.rbegin(), s.rend())) {
            swap(s[0], s[1]);
        }

        cout << "YES" << endl;
        cout << s << endl;
    }

    return 0;
}
