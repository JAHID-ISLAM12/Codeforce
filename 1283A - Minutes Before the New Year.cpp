#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int r=(24*60);
        cout<<r-((h*60)+m)<<endl;
    }return 0;
}
