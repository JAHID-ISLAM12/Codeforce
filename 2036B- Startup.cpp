#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        unordered_map<int,vector<int>>a;
        for(int i=0;i<k;i++){
           int b,c;
           cin>>b>>c;
           a[b].push_back(c);
           }
           vector<int>maxc;
           for(auto& entry : a){
            vector<int>& costs =entry.second;
            sort(costs.rbegin(),costs.rend());
            int totalc=0;
            for(int cost :costs){
                totalc+=cost;
            }
            maxc.push_back(totalc);
           }
           sort(maxc.rbegin(),maxc.rend());
           int maxe=0;
           for(int i=0;i<min(n,(int)maxc.size());i++){
            maxe+=maxc[i];
           }
           cout<<maxe<<endl;
    }return 0;
}

