#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>f(26,0);
    for(char c: s){
        f[c -'a']++;
    }
    int maxf=0;
    char mostf;
    for(int i=0;i<26;i++){
        if(f[i]>maxf){
            maxf=f[i];
        mostf='a'+i;

        }
    }
    if(maxf==n){cout<<s<<endl;continue;}
    for(int i=0;i<n;i++){
        if(s[i]!=mostf){
            s[i]=mostf;
            break;
        }
    }

cout<<s<<endl;

    }

    return 0;
}


