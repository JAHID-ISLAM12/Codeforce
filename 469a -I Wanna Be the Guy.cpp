#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,vx,vy;
    cin>>n>>p;
    set<int>l;
    for(int i=0;i<p;i++)
    {
        cin>>vx;
        l.insert(vx);
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>vy;
        l.insert(vy);
    }
    if(l.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else {cout<<"Oh, my keyboard!";}
    return 0;
}
