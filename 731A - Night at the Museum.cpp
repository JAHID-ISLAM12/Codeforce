#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    char ini='a';
    int t=0;
    for(int i=0;i<a.size();i++){
        int x=min(abs(ini-a[i]),26-abs(ini-a[i]));
        ini=a[i];
        t=t+x;
    }
    cout<<t<<endl;
    return 0;
}
