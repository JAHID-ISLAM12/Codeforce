#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,y=0;
        cin>>n;
       int a;

        for(int i=0;i<n;i++){
                cin>>a;
        if(a==1){x=0;}
        else {x++;y=max(y,x);}


        }
        cout<<y<<endl;
    }return 0;
}
