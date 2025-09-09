
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t[n][n];
    for(int i=0;i<n;i++){
      t[i][0]=1;
      t[0][i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            t[i][j]=t[i-1][j]+t[i][j-1];
        }
    }
    cout<<t[n-1][n-1]<<endl;

    return 0;
}

