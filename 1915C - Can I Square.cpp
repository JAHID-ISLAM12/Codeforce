#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n],c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            c=c+a[i];
        }
        long long int sr=sqrt(c);
        if(sr*sr==c){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}
    }return 0;
}
