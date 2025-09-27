#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         string s;
         cin>>s;
         int c=s.size();
         set<char>se;
         for(int i=0;i<n;i++){
            se.insert(s[i]);
         }
         c=c+se.size();
         cout<<c<<endl;
    }

    return 0;

}
