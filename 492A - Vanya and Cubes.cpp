#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int sum=0,h=0;

    for(int i=1;;i++){
        sum=sum+i*(i+1)/2;
        if(t-sum>=0){h++;}
        else {break;}
    }
    cout<<h<<endl;
    return 0;

}
