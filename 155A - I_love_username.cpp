#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n>1)
    {
        int maxc=a[0];
        int minc=a[0];
        for(int i=1;i<n;i++)
        {
            if (a[i]>maxc)
            {
                maxc=a[i];
                count++;
            }
            if(a[i]<minc)
            {
                minc=a[i];
                count++;
            }
        }
    }
    cout<<count<<endl;

    return 0;

}
