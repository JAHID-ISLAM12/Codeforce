#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--){
        vector<string>a(10);
        for(int i=0;i<10;i++){
            cin>>a[i];
        }
        int s=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(a[i][j]=='X'){
            if(i == 0 || i == 9 || j == 0 || j == 9) s+=1;
            else if(i == 1 || i == 8 || j == 1 || j == 8) s+=2;
            else if(i == 2 || i == 7 || j == 2 || j == 7) s+=3;
            else if(i == 3 || i == 6 || j == 3 || j == 6) s+=4;
            else if(i == 4 || i == 5 || j == 4 || j == 5) s+=5;
                }
            }
        }
        cout<<s<<endl;

    }return 0;
}
