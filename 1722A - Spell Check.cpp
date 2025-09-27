#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        string s,v="Timur";
        cin>>n;

        cin>>s;
        sort(s.begin(),s.end());
        sort(v.begin(),v.end());

        if(s==v){
        cout<<"YES"<<endl;
        }
        else {cout<<"NO"<<endl;}


    }return 0;

}
