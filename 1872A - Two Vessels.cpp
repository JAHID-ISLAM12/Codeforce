#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int n=(a+b)/2;
        int d=abs(a-n);
        int m=(d+c-1)/c;
        cout<<m<<endl;

    }


    return 0;
}


