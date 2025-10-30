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
        int e=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){e=e+a[i];}
            else {odd=odd+a[i];}

        }
        if(e>odd){cout<<"Yes"<<endl;}
        else {cout<<"No"<<endl;}
    }return 0;
}
