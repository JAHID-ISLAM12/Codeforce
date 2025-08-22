#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>t;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        t.push_back(a);
    }
    int maxv=0,maxi=0,minv=101,mini=n-1;
    for(int i=0;i<n;i++)
    {
        if(t[i]>maxv)
        {
            maxv=t[i];
            maxi=i;
        }
        if(t[i]<=minv)
        {
            minv=t[i];
            mini=i;
        }

    }
    if(mini>maxi)
    {
        cout<<maxi+n-1-mini<<endl;
    }
    else
    {
        cout<<maxi+n-2-mini;
    }
    return 0;
}
