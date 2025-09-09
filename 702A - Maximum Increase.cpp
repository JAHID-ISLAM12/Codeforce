#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1,m=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n-1;i++){
        if(a[i+1]>a[i]){c++;}
        else c=1;

        if(m<c){m=c;}
    }
    cout<<m<<endl;
    return 0;
}
