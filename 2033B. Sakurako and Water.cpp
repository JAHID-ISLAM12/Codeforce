
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int r=0;
    while(t--){
        int n;cin>>n;
        int a[n][n];
        int r=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int op=0;
        for(int s=n-1;s>=0;s--){
            for(int i=s,j=0;i<n && j<n;i++,j++){

                if(a[i][j]<0){
                    int d=-a[i][j];
                    op+=d;
                    for(int k=0;i+k<n && j+k<n;k++){
                        a[i+k][j+k]+=d;
                    }
                }
            }
        }
        for(int s=1;s<n;s++){
            for(int i=0,j=s;i<n && j<n;i++,j++){
                if(a[i][j]<0){
                    int d=-a[i][j];
                    op+=d;
                    for(int k=0;i+k<n && j+k<n;k++){
                        a[i+k][j+k]+=d;
                    }
            }
            }
        }
        cout<<op<<endl;

    }return 0;
}
