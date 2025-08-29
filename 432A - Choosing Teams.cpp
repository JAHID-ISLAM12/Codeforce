#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c=0;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {

        if(abs(a[i]-5)>=m)
        {
            c++;
        }
    }
    cout<<c/3<<endl;
    return 0;

}
