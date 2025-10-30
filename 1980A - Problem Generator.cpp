#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        map<char,int>c;
        for(char a : s){
            c[a]++;
        }
        int addi=0;
        for(char i='A';i<='G';i++){
            int curr=c[i];
            if(curr<m){
                addi+=(m-curr);
            }
        }
        cout<<addi<<endl;
    }return 0;
}
