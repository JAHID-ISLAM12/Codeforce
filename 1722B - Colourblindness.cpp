#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,flag=1;
        cin>>x;
        string s,a;
        cin>>s;
        cin>>a;
        for(int i=0;i<x;i++){
            if(s[i]==a[i] || (s[i]=='G' && a[i]=='B') || (s[i]=='B' && a[i]=='G')){
                flag=1;
            }
            else{flag=0;break;}
        }
        if(flag){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}

    }return 0;
}
