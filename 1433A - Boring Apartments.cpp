#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        int d=a%10;
        int b=d*10;
        string s = to_string(a);
        if(s.size()==1){cout<<b-9<<endl;}
        else if(s.size()==2){cout<<b-7<<endl;}
        else if(s.size()==3){cout<<b-4<<endl;}
        else {cout<<b<<endl;}
    }
    return 0;
}
