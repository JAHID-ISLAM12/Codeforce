#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int w,h,n,ans=1;
        cin>>w>>h>>n;
        if(n==1){cout<<"Yes"<<endl;continue;}
        while(w%2==0){
            ans=ans*2;
            w=w/2;
        }
        while(h%2==0){
            ans=ans*2;
            h=h/2;
        }
        if(ans>=n){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}

    }
  return 0;
}
