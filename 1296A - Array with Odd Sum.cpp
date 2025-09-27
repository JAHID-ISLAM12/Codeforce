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
        int o=0,e=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){e++;}
            else o++;
        }
        if(o%2==1 || (o>0 and e>0)){cout<<"yes"<<endl;}

        else {cout<<"NO"<<endl;}

    }return 0;
}
