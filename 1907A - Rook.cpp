
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    char r=s[0];
    char c=s[1];
    vector<string>m;
    for(int i=0;i<8;i++){
            char rc='1'+i;
        if(rc!=c){m.push_back(string(1,r)+rc);}
    }
    for(int i=0;i<8;i++){
            char cc='a'+i;
        if(cc!=r){m.push_back(string(1,cc)+c);}
    }

    for(int i=0;i<m.size();i++){
        cout<<m[i]<<endl;
    }
    }


    return 0;
}

