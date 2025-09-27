#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<string,int>mp;
        bool ans=false;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            char z=s[i];
            while(i<n && s[i]==z)
            {
                i++;
            }
            i--;
            if(mp[z]>1)ans=1;
        }
        if(ans){cout<<"NO"<<endl;}
        else {cout<<"YES"<<endl;}

    }
    return 0;
}
