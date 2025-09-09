#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x=0,y=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b){x++;}
        else if(a<b){y++;}
        else {x++;y++;}

    }
    if(x>y){cout<<"Mishka"<<endl;}
    else if(x<y) {cout<<"Chris"<<endl;}
    else {cout<<"Friendship is magic!^^"<<endl;}
    return 0;
}
