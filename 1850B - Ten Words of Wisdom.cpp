#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i]>>b[i];
        }
        int m=0,c=0;
        for(int i=0;i<n;i++){
            if(a[i]<=10){
                if(b[i]>m){
                    m=b[i];
                    c=i+1;
                }
            }
        }
        cout<<c<<endl;
    }
}
