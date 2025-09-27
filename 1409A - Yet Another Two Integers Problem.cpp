#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,t;
    cin>>t;
    while(t--){
    cin>>a>>b;
    int c=abs(a-b);
    if(a==b){cout<<0<<endl;}
    else if(c%10==0){cout<<(c/10)<<endl;}
     else {cout<<(c/10)+1<<endl;}



   }
    return 0;
}
