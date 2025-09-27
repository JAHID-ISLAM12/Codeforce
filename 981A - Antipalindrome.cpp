#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    cin>>s;
    r=s;
    reverse(r.begin(),r.end());
    int c=0;
    set<char>S;
    for(int i=0;i<s.size();i++){
        S.insert(s[i]);
        if(s[i]==r[i]){
            c=1;
        }
        else {c=0;break;}
    }
    if(c==0){
        cout<<s.size()<<endl;
    }
    else if(c==1 && S.size()!=1){
        cout<<s.size()-1<<endl;
    }
    else if(S.size()==1){cout<<0<<endl;}




    return 0;
}


