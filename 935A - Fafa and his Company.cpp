#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0;
    for(int i=1;i<t;i++){
        if(t%i==0){c++;}
    }
    cout<<c<<endl;
    return 0;
}
