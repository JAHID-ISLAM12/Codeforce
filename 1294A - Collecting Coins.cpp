#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    int ans=max({a,b,c});
    int n=(ans-a)+(ans-b)+(ans-c);
    if(x>=n &&(x-n)%3==0){cout<<"Yes"<<endl;}
    else {cout<<"No"<<endl;}
    }return 0;

}
