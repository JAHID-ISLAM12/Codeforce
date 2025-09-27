
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int>v;
        for(int i=1;i<n;i++){
            int div=0;
            div=a[i]-a[i-1];
            v.push_back(div);
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }return 0;
}
