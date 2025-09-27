#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int a,b,c,d,t=0;
        cin>>a>>b>>c>>d;
        if(b>a){t++;}
        if(c>a){t++;}
        if(d>a){t++;}

        cout<<t<<endl;

    }

    return 0;
}
