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
        int c=0,d=0;
        for(int i=0;i<n;i++){
                if(s[i]=='B'){
                    c=i;
                    break;
                }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){
                d=i;
                break;
            }
        }

        cout<<abs(c-d)+1<<endl;
    }
}
