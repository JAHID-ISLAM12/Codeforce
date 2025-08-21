#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int a=max(x,y);
    int b=7-a;
    int d=__gcd(b,6);
    cout<<b/d<<"/"<<6/d<<endl;
    return 0;
}
