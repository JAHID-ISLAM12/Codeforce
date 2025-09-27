#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int m=0;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int c = *min_element(a.begin(), a.end());
        int o = *min_element(b.begin(), b.end());
        for(int i=0;i<n;i++){
         m+= max(a[i]-c,b[i]-o);

        }
        cout<<m<<endl;
    }return 0;

}
