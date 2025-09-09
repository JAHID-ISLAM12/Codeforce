#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int sum=0;
    cin>>a>>b;
    for(int i=1;;i++)
    {
        sum=a*i;
        if(sum%10==0 || sum%10==b)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
