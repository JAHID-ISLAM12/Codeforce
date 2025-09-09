#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int x;
    cin>>t>>x;
    int dis=0;
    while(t--){
        char a;

        long long int d;
        cin>>a>>d;
        if(a=='+'){
            x=x+d;
        }
        else{
            if(x>=d){
                x=x-d;
            }else dis++;
        }
    }
    cout<<x<<" "<<dis<<endl;


    return 0;
}

