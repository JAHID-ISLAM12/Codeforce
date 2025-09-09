#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    bool t=false;
    char z;
    for (int i=0;i<a*b;i++){
        cin>>z;
        if(z=='C'||z=='M'||z=='Y'){
            t=true;
        }
    }
    if(t==true){cout<<"#Color"<<endl;}
    else {cout<<"#Black&White"<<endl;}
  return 0;
}
