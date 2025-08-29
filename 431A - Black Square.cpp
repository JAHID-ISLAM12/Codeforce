#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,x=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'){x=x+a;}
        else if(s[i]=='2'){x=x+b;}
        else if(s[i]=='3'){x=x+c;}
        else if(s[i]=='4'){x=x+d;}

    }
    cout<<x<<endl;
    return 0;

}
