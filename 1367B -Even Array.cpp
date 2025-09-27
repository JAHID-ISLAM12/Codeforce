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
        int a[n];
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2 != a[i]%2)
            {
                if(a[i]%2){ o++;}
                else {e++;}
            }

        }
        if(o!= e){cout<<"-1"<<endl;}
        else cout<<o<<endl;

    }
    return 0;
}
