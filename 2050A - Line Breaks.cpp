#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        int m,n;
        cin>>n>>m;
        vector<string>w(n);
        for(int i=0;i<n;i++){
            cin>>w[i];

        }
        int l=0,c=0;
        for(int i=0;i<n;i++){
            int wl=w[i].size();
            if(l+wl<=m){
                l+=wl;
                ++c;
            }else{break;}
        }
        cout<<c<<endl;
    }


    return 0;
}


