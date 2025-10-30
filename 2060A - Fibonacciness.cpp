#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        int a,b,d,e;
        cin>>a>>b>>d>>e;
        int maxc=0;
        for(int c=-200;c<=200;++c){
            int co=0;
            if(d==a+b){++co;}
            if(e==b+c){++co;}
            if(d==c+b){++co;}
            maxc=max(maxc,co);
        }
        cout<<maxc<<endl;
    }


    return 0;
}


