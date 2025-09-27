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
        vector<int>n(a);
        for(int i=0;i<a;i++)
        {
            cin>>n[i];

        }
        sort(n.begin(),n.end());
        int f=0;
        for(int i=1;i<a;i++)
        {
            if(n[i]-n[i-1]>1)
            {
                f=1;
                break;
            }


        }
        if(f==0){cout<<"yes"<<endl;}
        else {cout<<"no"<<endl;}
    }
    return 0;
}
