#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        long long f1=0,f2=0;
        f1+=pow(2,n);
        for(int i=1;i<n/2;++i){
           f1+=pow(2,i);
        }
        for(int i=n/2;i<n;++i){
            f2+=pow(2,i);
        }
        cout<<abs(f1-f2)<<endl;
    }


    return 0;
}


