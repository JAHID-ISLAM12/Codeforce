
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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int minp=min_element(a.begin(),a.end())-a.begin();
        int maxp=max_element(a.begin(),a.end())-a.begin();

        if (minp>maxp){swap(minp,maxp);}
        int ans=min({maxp+1,n-minp,minp+1+n-maxp});
        cout<<ans<<endl;

    }


    return 0;
}

