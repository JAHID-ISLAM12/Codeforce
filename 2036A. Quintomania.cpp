#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];

        }
        bool c=true;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])!=5 && abs(a[i]-a[i+1])!=7){
                c=false;
                break;
            }
        }
        if(c){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}


    }return 0;
}
