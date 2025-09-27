
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        long s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s==n){cout<<0<<endl;}
        else if(s<n){cout<<1<<endl;}
        else {cout<<s-n<<endl;}
    }


    return 0;
}

