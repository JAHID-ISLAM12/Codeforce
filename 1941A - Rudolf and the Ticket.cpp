#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){cin>>a[i];}
        vector<int>b(m);
        for(int i=0;i<m;i++){cin>>b[i];}
        long int l=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]+b[j]<=k){++l;}
            }
        }
        cout<<l<<endl;

    }return 0;
}
