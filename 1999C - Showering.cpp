#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       int long long n,s,m;
       cin>>n>>s>>m;
       vector<pair<long long,long long>>task(n);
       for(int i=0;i<n;i++){
        cin>>task[i].first>>task[i].second;
       }

       bool can=false;
       if(task[0].first >= s){can=true;}
       for(int i=1;i<n && !can;i++){
            long gap=task[i].first-task[i-1].second;
          if(gap>=s){can=true;}

       }
       if(!can && m-task[n-1].second >=s){can=true;}

       if(can==true){
        cout<<"Yes"<<endl;
       }
       else cout<<"No"<<endl;

    }


    return 0;
}


