#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else c=0;
        if (c>=7){break;}
    }
    if(c>=7){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}



    return 0;
}


