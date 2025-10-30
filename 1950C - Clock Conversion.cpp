
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int h=stoi(s.substr(0,2));
        int m=stoi(s.substr(3,2));
         if (h == 0) { // Midnight
            cout << "12:" << setw(2) << setfill('0') << m << " AM" << endl;
        } else if (h == 12) { // Noon
            cout << "12:" << setw(2) << setfill('0') << m << " PM" << endl;
        } else if (h < 12) { // Morning
            cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << " AM" << endl;
        } else { // Afternoon/Evening
            cout << setw(2) << setfill('0') << h - 12 << ":" << setw(2) << setfill('0') << m << " PM" << endl;
        }


    }


    return 0;
}

