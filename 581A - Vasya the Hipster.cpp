#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a<<" "<<0<<endl;
    }
    if(a>b)
    {
        cout<<b<<" "<<(a-b)/2<<endl;
    }
    else if(b>a)
    {
        cout<<a<<" "<<(b-a)/2<<endl;
    }
    return 0;

}
