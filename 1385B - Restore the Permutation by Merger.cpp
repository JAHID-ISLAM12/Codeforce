#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(2*n);
        unordered_set<int> u;
        vector<int>v;

        for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(u.find(a[i])==u.end()){
                u.insert(a[i]);
                v.push_back(a[i]);
            }
        }
        for(int f : v){
            cout<<f<<" ";
        }
        cout<<endl;
    }


    return 0;
}


