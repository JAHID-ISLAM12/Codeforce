#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int avg=(abs(a-b)+abs(b-c)+abs(a-c))/2;
    cout<<avg<<endl;



    return 0;
}
