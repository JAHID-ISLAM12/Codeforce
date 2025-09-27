#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        set<int>a;
        int c;
        for(int i=0;i<n;i++){
            cin>>c;
            a.insert(c);
        }

        if(a.size()==n){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
    }return 0;
}

