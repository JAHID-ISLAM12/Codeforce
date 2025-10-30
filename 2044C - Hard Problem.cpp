#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int r1=min(m,a);
        int r2=min(m,b);

        int t=r1+r2;
        int re=m*2-t;
        int cr=min(re,c);

        cout<<r1+r2+cr<<endl;

    }


    return 0;
}


