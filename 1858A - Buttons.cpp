#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int an=(c+1)/2;
        int ka=c-an;
        int x=a+an;
        int y=b+ka;

        if(x>y){cout<<"First"<<endl;}
        else{cout<<"Second"<<endl;}
    }


    return 0;
}


