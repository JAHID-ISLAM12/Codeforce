#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int>a(k);
        for(int i=0;i<k;i++){
            cin>>a[i];
        }
        int n=1,m=k;
        for(int i=1;i<=sqrt(k);i++){
            if(n%i==0){
                n=i;
                m=k/i;
                break;

            }
        }
        cout<<n<<" "<<m<<endl;
    }
}
