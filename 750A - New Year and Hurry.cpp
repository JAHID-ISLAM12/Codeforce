#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,c=0,a=0;
    cin>>n>>k;
     int b=240-k;
    for(int i=1;i<=n;i++)
    {
         a=a+i*5;
        if(a<=b)
        {
            c++;
        }

    }
    cout<<c<<endl;
    return 0;
}
