
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,f=1;
        cin>>n>>x;
        n=n-2;
        while(n>0){
            n=n-x;
            f++;
        }
        cout<<f<<endl;

    } return 0;
}
