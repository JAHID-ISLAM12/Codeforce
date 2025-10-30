#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n=0;
        string s,a="codeforces";
        cin>>s;
        for(int i=0;i<10;i++){
            if(s[i]!=a[i]){n++;}

        }cout<<n<<endl;
    }

    return 0;

}
