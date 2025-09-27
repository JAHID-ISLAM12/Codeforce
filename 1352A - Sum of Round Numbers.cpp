#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,count=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int>l;
        cin>>n;
        if(n%10!=0){l.push_back(n%10);}
        int ans=n%10;
        n=n-ans;

        if(n%100!=0){l.push_back(n%100);}
         ans=n%100;
        n=n-ans;

        if(n%1000!=0){l.push_back(n%1000);}
        ans=n%1000;
        n=n-ans;

        if(n%10000!=0){l.push_back(n%10000);}
        if(n>=10000 && n%10000==0){l.push_back(n);}
        cout<<l.size()<<endl;
        for(int i=0;i<l.size();i++)
        {
            cout<<l[i]<<" ";
        }
    }
return 0;

}
