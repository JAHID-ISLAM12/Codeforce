#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k){c=1;}
        }
        if(c==1){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}
    }return 0;
}
