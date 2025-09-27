#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0,d=0;
        cin>>n;
        int b=n*2;
        int a[b];
        for(int i=0;i<b;i++){
            cin>>a[i];
            if(a[i]%2==0){c++;}
            else {d++;}
        }

        if(c==n && d==n){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}
    }return 0;
}
